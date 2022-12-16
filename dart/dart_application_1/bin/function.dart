import 'dart:io';

void main(){
  var x = fun1(2+9);
  print(x);

  print(fun2());

  fun3(2, 6);
}

fun1(message){
  return 'message = $message';
}

int fun2(){
  return 3+4;
}
void fun3(var a, var b){
  print(a+b);
  print(a-b);
}