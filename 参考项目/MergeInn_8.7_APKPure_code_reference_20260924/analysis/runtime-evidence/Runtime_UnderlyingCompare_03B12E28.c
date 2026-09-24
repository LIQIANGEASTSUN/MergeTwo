// Tool: Ghidra 12.1.2 with no global analysis; native pseudocode, not original C#
// Source candidate: Runtime.UnderlyingCompare 0x3B12E28; Underlying comparison called by RVA 0x3B096C4
// Image base: 0x10000; Ghidra address: 03b22e28; native size hint: 0x100


bool Runtime_UnderlyingCompare_03B12E28(int param_1,int param_2)

{
  bool bVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(iRam03b22edc + 0x3b22e40);
  if (*pcVar2 == '\0') {
    func_0x0200945c(*(undefined4 *)(iRam03b22ee0 + 0x3b22e54));
    *pcVar2 = '\x01';
  }
  bVar1 = true;
  if (param_1 != 0 || param_2 != 0) {
    if (param_2 == 0) {
      if (*(int *)(**(int **)(iRam03b22ee4 + 0x3b22e8c) + 0x74) == 0) {
        func_0x02009474();
      }
      if (param_1 == 0) {
        func_0x02009470();
      }
      param_1 = *(int *)(param_1 + 8);
    }
    else if (param_1 == 0) {
      if (*(int *)(**(int **)(iRam03b22ee8 + 0x3b22ebc) + 0x74) == 0) {
        func_0x02009474();
      }
      param_1 = *(int *)(param_2 + 8);
    }
    else {
      param_1 = param_1 - param_2;
    }
    bVar1 = param_1 == 0;
  }
  return bVar1;
}

