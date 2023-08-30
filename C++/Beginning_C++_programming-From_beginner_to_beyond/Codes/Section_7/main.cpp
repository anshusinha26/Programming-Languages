//// 54. Arrays
//// initializing arrays
//#include <iostream>
//
//using namespace std;
//
//int main() {
////    int test_scores [3] {1, 2, 3};
////    int test_scores_2 [3] {1}; // init to 1 and rest to zero
////    int test_scores_3 [] {1, 2, 3}; // size is automatically allocated
////    cout << "First element: " << test_scores[0] << endl;
//
////    char vowels [] {'a', 'e', 'i', 'o', 'u'};
////    cout << "First vowel: " << vowels[0] << endl;
////    cout << "Last vowel: " << vowels[4] << endl;
//
////    double temp [] {98.3, 99.9, 92.3, 91.4};
////    cout << "First high temp: " << temp[0] << endl;
////    temp[0] = 100.7;
////    cout << "First high temp: " << temp[0] << endl;
//
//    int test_scores [] {60, 70, 80, 90 , 100};
//    cout << "Test score 1: " << test_scores[0] << endl;
//    cout << "Test score 2: " << test_scores[1] << endl;
//    cout << "Test score 3: " << test_scores[2] << endl;
//    cout << "Test score 4: " << test_scores[3] << endl;
//    cout << "Test score 5: " << test_scores[4] << endl;
//
//    cout << "Enter 5 test scores separated by spaces: " << endl;
//    cin >> test_scores[0] >> test_scores[1] >> test_scores[2] >> test_scores[3] >> test_scores[4];
//    cout << "New test scores are: " << endl;
//    cout << "Test score 1: " << test_scores[0] << endl;
//    cout << "Test score 2: " << test_scores[1] << endl;
//    cout << "Test score 3: " << test_scores[2] << endl;
//    cout << "Test score 4: " << test_scores[3] << endl;
//    cout << "Test score 5: " << test_scores[4] << endl;
//
//    return 0;
//}

//// 57. Multi-dimensional arrays
//#include <iostream>
//
//using namespace std;
//
//int main() {
//    int movie_rating [3] [4] {
//            {0, 4, 3, 5},
//            {2, 3, 3, 5},
//            {1, 4, 4, 5}
//    };
//    cout << movie_rating << endl;
//    return 0;
//}

//// 58. Declaring and initializing vectors - dynamic arrays
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//    vector <int> test_scores {93, 89, 98};
//    vector <char> vowels {'a', 'e', 'i', 'o', 'u'};
//    vector <double> temp (365, 80.0); // 365 is the size of the array and all double values are assigned as 80.0
//
//    cout << test_scores[0] << endl;
//    cout << vowels.at(0) << endl;
//
//    cout << "Previous test scores: " << endl;
//    cout << test_scores[0] << endl;
//    cout << test_scores[1] << endl;
//    cout << test_scores[2] << endl;
//
//    int score_to_add;
//    cout << "Enter a test score to add: " << endl;
//    cin >> score_to_add;
//    test_scores.push_back(score_to_add);
//    cout << "Enter one more score to add: " << endl;
//    cin >> score_to_add;
//    test_scores.push_back(score_to_add);
//
//    cout << "New test scores: " << endl;
//    cout << test_scores[0] << endl;
//    cout << test_scores[1] << endl;
//    cout << test_scores[2] << endl;
//    cout << test_scores[3] << endl;
//    cout << test_scores[4] << endl;
//    cout << "Size of the new vector: " << test_scores.size() << endl;
//
//    return 0;
//}

//// 60. Section challenge
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//    vector <int> vec_1;
//    vector <int> vec_2;
//    vec_1.push_back(10);
//    vec_1.push_back(20);
//    cout << "Elements in vec_1: " << endl;
//    cout << vec_1.at(0) << endl;
//    cout << vec_1.at(1) << endl;
//
//    vec_2.push_back(100);
//    vec_2.push_back(200);
//    cout << "Elements in vec_2: " << endl;
//    cout << vec_2.at(0) << endl;
//    cout << vec_2.at(1) << endl;
//
//    vector <vector <int>> vec_2d;
//    vec_2d.push_back(vec_1);
//    vec_2d.push_back(vec_2);
//    cout << "Elements in vec_2d: " << endl;
//    cout << vec_2d.at(0).at(0) << ", " << vec_2d.at(0).at(1) << endl;
//    cout << vec_2d.at(1).at(0) << ", " << vec_2d.at(1).at(1) << endl;
//
//    vec_1.at(0) = 1000;
//
//    cout << "Elements in vec_2d: " << endl;
//    cout << vec_2d.at(0).at(0) << ", " << vec_2d.at(0).at(1) << endl;
//    cout << vec_2d.at(1).at(0) << ", " << vec_2d.at(1).at(1) << endl;
//
//    cout << "Elements in vec_1: " << endl;
//    cout << vec_1.at(0) << endl;
//    cout << vec_1.at(1) << endl;
//
//    return 0;
//}

