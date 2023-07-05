// Pre-processors also support if-else directives which are typically used for conditional compilation. 

int main(){
#if VERBOSE >= 2
  printf("Trace Message");
#endif
}
