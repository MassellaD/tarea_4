//ejercicio_1
int basic_op(char op, int dato1, int dato2) 
{
  switch (op)
  {
    case '+': return (dato1 + dato2);
    case '-': return (dato1 - dato2);
    case '*': return (dato1 * dato2);
    case '/': return (dato1 / dato2);
  }
  return 0;
}