//#include <iostream>
//#include <ctime>
//
//#define sigmoid(x) ( 1.0/(1.0+exp(-(x))) ) // sigmoid
//
//using namespace std;
//
//class Neuron {
//private:
//    int input_size;
//    double lr;
//    double* weight_;
//    double bias_;
//    double* cr; // 변화율
//    double cr_b;// 바이어스에 대한 변화율
//
//
//public:
//    Neuron(int num_of_input, double alpha) : input_size(num_of_input), lr(alpha), bias_(0), cr_b(0)
//    {
//        weight_ = new double[input_size];
//        cr = new double[input_size];
//        for (int i = 0; i < input_size; i++)
//        {
//            weight_[i] = (double)rand() / RAND_MAX;
//            cr[i] = 0;
//        }
//
//        bias_ = (double)rand() / RAND_MAX;
//
//        /*cout << weight_[0] << endl;
//        cout << weight_[1] << endl;
//        cout << bias_ << endl;*/
//    }
//
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
//        y = sigmoid(zeta); // 원하는 출력
//
//        double E = 0;
//        E = (y - output); // 오차 E = (실제출력) -(원하는 출력)
//        //lrE(y(1-y)input
//
//        /*cout << xw << endl;
//        cout << endl;
//        cout << y << endl;
//        cout << endl;
//        cout << zeta << endl;*/
//
//        for (int i = 0; i < input_size; i++)
//        {
//            cr[i] += lr * E * y * (1 - y) * input[i];
//        }
//
//        cr_b += lr * E * y * (1 - y);
//
//    }
//
//    void learn2(double input, double output)
//    {
//        double xw = 0;
//        double zeta = 0;
//
//        for (int i = 0; i < input_size; i++)
//        {
//            xw += weight_[i] * input;
//        }
//
//        zeta = xw + bias_;
//
//        double y = 0;
//        y = sigmoid(zeta); // 원하는 출력
//
//        double E = 0;
//        E = (y - output); // 오차 E = (실제출력) -(원하는 출력)
//        //lrE(y(1-y)input
//
//        /*cout << xw << endl;
//        cout << endl;
//        cout << y << endl;
//        cout << endl;
//        cout << zeta << endl;*/
//
//        for (int i = 0; i < input_size; i++)
//        {
//            cr[i] += lr * E * y * (1 - y) * input;
//        }
//
//        cr_b += lr * E * y * (1 - y);
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
//    double work2(double input) {
//        double xw = 0;
//        double zeta = 0;
//
//        for (int i = 0; i < input_size; i++)
//        {
//            xw += weight_[i] * input;
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
//    srand((unsigned)time(NULL));	// 최초 가중치를 임의로 정하기 위한 난수.
//
//    // 뉴런 클래스 생성자. 
//    // Neuron(int num_of_input, double alpha) 
//                  //(입력의 수, learning rate)
//
//    cout << endl;
//    cout << "AND" << endl;
//    cout << endl;
//    Neuron* and_neuron = new Neuron(2, 0.1);
//
//    // Sample Sets for AND 
//    double and_sample_input[4][2] = { {0,0},{0,1},{1,0},{1,1} };
//    double and_sample_output[4] = { 0, 0, 0, 1 };
//
//    for (int i = 0; i < 5000; i++) {
//        for (int j = 0; j < 4; j++) {
//            and_neuron->learn(and_sample_input[j], and_sample_output[j]); // 학습
//        }
//        and_neuron->fix(); // 가중치 수정
//
//        // Print result //
//        if ((i + 1) % 100 == 0) {
//            cout << "------ Learn " << i + 1 << " times -----" << endl;
//            for (int j = 0; j < 4; j++) {
//                cout << and_sample_input[j][0] << ' ' << and_sample_input[j][1] << " : "
//                    << and_neuron->work(and_sample_input[j]) << endl; // 결과값 
//            }
//        }
//    }
//    delete and_neuron;
//
//    cout << endl;
//    cout << "OR" << endl;
//    cout << endl;
//
//    Neuron* or_neuron = new Neuron(2, 0.1);
//
//    // Sample Sets for OR 
//    double or_sample_input[4][2] = { {0,0},{0,1},{1,0},{1,1} };
//    double or_sample_output[4] = { 0, 1, 1, 1 };
//
//    for (int i = 0; i < 5000; i++) {
//        for (int j = 0; j < 4; j++) {
//            or_neuron->learn(or_sample_input[j], or_sample_output[j]); // 학습
//        }
//        or_neuron->fix(); // 가중치 수정
//
//        // Print result //
//        if ((i + 1) % 100 == 0) {
//            cout << "------ Learn " << i + 1 << " times -----" << endl;
//            for (int j = 0; j < 4; j++) {
//                cout << or_sample_input[j][0] << ' ' << or_sample_input[j][1] << " : "
//                    << or_neuron->work(or_sample_input[j]) << endl; // 결과값 
//            }
//        }
//    }
//    delete or_neuron;
//
//    cout << endl;
//    cout << "NOT" << endl;
//    cout << endl;
//
//    Neuron* not_neuron = new Neuron(1, 0.1);
//
//    // Sample Sets for NOT 
//    double not_sample_input[2] = { 0, 1 };
//    double not_sample_output[2] = { 1, 0 };
//
//    for (int i = 0; i < 5000; i++) {
//        for (int j = 0; j < 2; j++) {
//            not_neuron->learn2(not_sample_input[j], not_sample_output[j]); // 학습
//        }
//        not_neuron->fix(); // 가중치 수정
//
//        // Print result //
//        if ((i + 1) % 100 == 0) {
//            cout << "------ Learn " << i + 1 << " times -----" << endl;
//            for (int j = 0; j < 2; j++) {
//                cout << not_sample_input[j] << " : "
//                    << not_neuron->work2(not_sample_input[j]) << endl; // 결과값 
//            }
//        }
//    }
//    delete not_neuron;
//}
