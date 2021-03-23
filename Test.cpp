#include "doctest.h"
#include "Board.hpp"
#include "Direction.hpp"
using namespace ariel;

#include <string>
#include <algorithm>
using namespace std;


Board b;
// Direction d;
void first_post(Board b){
b.post(1,1,Direction::Horizontal,"first post");
}
void sec_post(Board b){
b.post(10,10,Direction::Vertical,"sec post");
}
void third_post(Board b){
b.post(100,100,Direction::Horizontal,"third post");
}
void four_post(Board b){
b.post(50,35,Direction::Vertical,"four post");
}




TEST_CASE("post&read code") {
    CHECK(b.read(0,0,Direction::Horizontal,0)=="");
    CHECK(b.read(0,0,Direction::Horizontal,1)=="_");
    CHECK(b.read(256,20,Direction::Horizontal,3)=="___");
    first_post(b);
    CHECK(b.read(1,1,Direction::Horizontal,10)=="first post");
    CHECK(b.read(1,1,Direction::Horizontal,5)=="first");
    CHECK(b.read(1,7,Direction::Horizontal,4)=="post");
    CHECK(b.read(1,1,Direction::Vertical,2)=="f_");
    sec_post(b);
    CHECK(b.read(10,10,Direction::Vertical,8)=="sec post");
    CHECK(b.read(10,10,Direction::Vertical,2)=="se");
    CHECK(b.read(10,10,Direction::Vertical,3)=="sec");
    CHECK(b.read(15,10,Direction::Vertical,4)=="post");
    CHECK(b.read(15,10,Direction::Vertical,10)=="post______");
    third_post(b);
    CHECK(b.read(100,100,Direction::Horizontal,10)=="third post");
    b.post(100,100,Direction::Horizontal,"four");
    CHECK(b.read(100,100,Direction::Horizontal,4)=="four");
    CHECK(b.read(100,100,Direction::Horizontal,5)=="fourd");
    CHECK(b.read(100,100,Direction::Horizontal,10)=="fourd post");
    CHECK(b.read(100,107,Direction::Horizontal,10)=="post______");
    four_post(b);
    CHECK(b.read(50,35,Direction::Vertical,10)=="four post_");
    CHECK(b.read(50,35,Direction::Horizontal,3)=="f__");
    b.post(50,35,Direction::Horizontal,"five");
    CHECK(b.read(50,35,Direction::Vertical,10)=="four post_");
    CHECK(b.read(50,35,Direction::Horizontal,3)=="fiv");





}
