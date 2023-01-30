//#include <iostream>
//#include <ctime>
//
//#define sigmoid(x) ( 1.0/(1.0+exp(-(x))) ) // sigmoid
//
//using namespace std;
//
//class neuron {
//private:
//    int input_size;
//    double lr;
//    double* weight_;
//    double bias_;
//    double* cr; // ��ȭ��
//    double cr_b;// ���̾�� ���� ��ȭ��
//
//
//public:
//    neuron(int num_of_input, double alpha) : input_size(num_of_input), lr(alpha), bias_(0), cr_b(0)
//    {
//        weight_ = new double[input_size];
//        cr = new double[input_size];
//        for (int i = 0; i < input_size; i++)
//        {
//            weight_[i] = (double)rand() / rand_max;
//            cr[i] = 0;
//        }
//
//        bias_ = (double)rand() / rand_max;
//
//        /*cout << weight_[0] << endl;
//        cout << weight_[1] << endl;
//        cout << bias_ << endl;*/
//    }
//
//    ~neuron()
//    {
//        delete[] weight_;
//        delete[] cr;
//        cout << "good bye" << endl;
//    }
//
//    void learn(double* input, double output)
//    {
//        double xw = 0;
//        double zeta = 0;
//
//        for (int i = 0; i < input_size; i++)
//        {
//            xw += weight_[i] * input[i];
//        }
//
//        zeta = xw + bias_;
//
//        double y = 0;
//        y = sigmoid(zeta); // ���� ���
//
//        double e = 0;
//        e = (y - output); // ���� e = (�������) -(���ϴ� ���)
//        //lre(y(1-y)input
//
//        /*cout << xw << endl;
//        cout << endl;
//        cout << y << endl;
//        cout << endl;
//        cout << zeta << endl;*/
//
//        for (int i = 0; i < input_size; i++)
//        {
//            cr[i] += lr * e * y * (1 - y) * input[i];
//        }
//
//        cr_b += lr * e * y * (1 - y);
//
//    }
//
//    void fix()
//    {
//        for (int i = 0; i < input_size; i++)
//        {
//            weight_[i] = weight_[i] - cr[i];
//            cr[i] = 0;
//        }
//
//        bias_ -= cr_b;
//        cr_b = 0;
//
//    }
//
//    double work(double* input) {
//        double xw = 0;
//        double zeta = 0;
//
//        for (int i = 0; i < input_size; i++)
//        {
//            xw += weight_[i] * input[i];
//        }
//
//        zeta = xw + bias_;
//
//        double y = 0;
//        y = sigmoid(zeta);
//
//        return y;
//    }
//
//};
//
//int main() {
//    srand((unsigned)time(null));	// ���� ����ġ�� ���Ƿ� ���ϱ� ���� ����.
//
//    // ���� Ŭ���� ������. 
//    // neuron(int num_of_input, double alpha) 
//                  //(�Է��� ��, learning rate)
//
//    cout << endl;
//    cout << "and" << endl;
//    cout << endl;
//    neuron* and_neuron = new neuron(2, 0.1);
//
//    // sample sets for and 
//    double and_sample_input[4][2] = { {0,0},{0,1},{1,0},{1,1} };
//    double and_sample_output[4] = { 0, 0, 0, 1 };
//
//    for (int i = 0; i < 5000; i++) {
//        for (int j = 0; j < 4; j++) {
//            and_neuron->learn(and_sample_input[j], and_sample_output[j]); // �н�
//        }
//        and_neuron->fix(); // ����ġ ����
//
//        // print result //
//        if ((i + 1) % 100 == 0) {
//            cout << "------ learn " << i + 1 << " times -----" << endl;
//            for (int j = 0; j < 4; j++) {
//                cout << and_sample_input[j][0] << ' ' << and_sample_input[j][1] << " : "
//                    << and_neuron->work(and_sample_input[j]) << endl; // ����� 
//            }
//        }
//    }
//    delete and_neuron;
//
//    cout << endl;
//    cout << "or" << endl;
//    cout << endl;
//
//    neuron* or_neuron = new neuron(2, 0.1);
//
//    // sample sets for or 
//    double or_sample_input[4][2] = { {0,0},{0,1},{1,0},{1,1} };
//    double or_sample_output[4] = { 0, 1, 1, 1 };
//
//    for (int i = 0; i < 5000; i++) {
//        for (int j = 0; j < 4; j++) {
//            or_neuron->learn(or_sample_input[j], or_sample_output[j]); // �н�
//        }
//        or_neuron->fix(); // ����ġ ����
//
//        // print result //
//        if ((i + 1) % 100 == 0) {
//            cout << "------ learn " << i + 1 << " times -----" << endl;
//            for (int j = 0; j < 4; j++) {
//                cout << or_sample_input[j][0] << ' ' << or_sample_input[j][1] << " : "
//                    << or_neuron->work(or_sample_input[j]) << endl; // ����� 
//            }
//        }
//    }
//    delete or_neuron;
//
//    cout << endl;
//    cout << "not" << endl;
//    cout << endl;
//
//    neuron* not_neuron = new neuron(1, 0.1);
//
//    // sample sets for not 
//    double not_sample_input[2][1] = { {0},{1} };
//    double not_sample_output[2] = { 1, 0 };
//
//    for (int i = 0; i < 5000; i++) {
//        for (int j = 0; j < 2; j++) {
//            not_neuron->learn(not_sample_input[j], not_sample_output[j]); // �н�
//        }
//        not_neuron->fix(); // ����ġ ����
//
//        // print result //
//        if ((i + 1) % 100 == 0) {
//            cout << "------ learn " << i + 1 << " times -----" << endl;
//            for (int j = 0; j < 2; j++) {
//                cout << not_sample_input[j][0] << " : "
//                    << not_neuron->work(not_sample_input[j]) << endl; // ����� 
//            }
//        }
//    }
//    delete not_neuron;
//}
