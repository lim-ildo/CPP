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
//
//
//        /*cout << weight_[0] << endl;
//        cout << weight_[1] << endl;
//        cout << bias_ << endl;*/
//    }
//
//
//    void learn(double* input, double output) // input : (1,0) input[0] = x1  input[1] x2 0
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
//    double work(double* input) { // input = (0,1)
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
///*
//
//
//목표: (x1x2') + (x1'x2)
//
//double not_sample_input[4][2] = { {0,0},{1} };
//double not_sample_output[2] = { 1, 0 };
//
//입력: input[2]
//
//1) x2' = NOT->work(x2);
//2) X1 배열 생성(x1과 x2') 담는
//3) and->work(X1)  이거의 결과값이 X1
//
//1) x1' = NOT->work(x1);
//2) X2 배열 생성(x1'과 x2) 담는
//2) and->work(X2)  이거의 결과값이 X2
//
//1)XOR배열을 생성(X1, X2) 담는
//2) or->work(XOR)
//3) 결과가 y 나옴
//4) 메인에서 4번 반복 출력를 해주면 과제가 끝남!
//
//*/
//
//class XOR_Neuron
//{
//private:
//    Neuron* not_neuron;
//    Neuron* and_neuron;
//    Neuron* or_neuron;
//
//public:
//    XOR_Neuron(Neuron* nn, Neuron* an, Neuron* on) : not_neuron(nn), and_neuron(an), or_neuron(on) {}
//    double xor_(double* input)
//    {
//        double* temp = input;
//        double x1[] = {input[0]};
//        double x2[] = {input[1]}; 
//
//        double not_x2 = not_neuron->work(x2); //1-1
//      
//        double X1[] = {x1[0], not_x2}; //1- 2
//
//        double And_X1 = and_neuron->work(X1); //1-3
//
//        double not_x1 = not_neuron->work(x1); // 2-1
//        
//        double X2[] = { not_x1, x2[0]}; //2- 2
//
//        double And_X2 = and_neuron->work(X2); //1-3
//
//        double XOR_[] = { And_X1, And_X2 }; //3-1
//
//        double Y = or_neuron->work(XOR_); //3-2
//
//        return Y;
//    }
//};
//
//
//
//int main() {
//    srand((unsigned)time(NULL));	// 최초 가중치를 임의로 정하기 위한 난수.
//
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
//    }
//
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
//    }
//
//
//    Neuron* not_neuron = new Neuron(1, 0.1);
//
//    // Sample Sets for OR 
//    double not_sample_input[4][2] = { {0,0},{1} };
//    double not_sample_output[2] = { 1, 0 };
//
//    for (int i = 0; i < 5000; i++) {
//        for (int j = 0; j < 2; j++) {
//            not_neuron->learn(not_sample_input[j], not_sample_output[j]); // 학습
//        }
//        not_neuron->fix(); // 가중치 수정
//    }
//
//
//
//
//    XOR_Neuron xor_neuoron = XOR_Neuron(not_neuron, and_neuron, or_neuron);
//
//
//    double xor_sample_input[4][2] = { {0,0},{0,1},{1,0},{1,1} };
//
//    // Print result //
//  
//    for (int j = 0; j < 4; j++) {
//       cout << xor_sample_input[j][0] << " " << xor_sample_input[j][1] << " : " << xor_neuoron.xor_(xor_sample_input[j]) << endl; // 결과값 
//    }
//}