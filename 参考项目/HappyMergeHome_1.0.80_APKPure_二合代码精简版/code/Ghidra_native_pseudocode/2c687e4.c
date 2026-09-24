
bool FUN_02c787e4(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_02c7206c();
  if (iVar1 == 0) {
    return false;
  }
  return *(char *)(param_1 + 0xd8) != '\0';
}

