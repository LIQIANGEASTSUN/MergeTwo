// Tool: Ghidra 12.1.2 with no global analysis; native pseudocode, not original C#
// Source candidate: Runtime.CompareImpl 0x3B096C4; Target of thunk at RVA 0x1024B74
// Image base: 0x10000; Ghidra address: 03b196c4; native size hint: 0x200


uint Runtime_CompareImpl_03B096C4(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(iRam03b19728 + 0x3b196dc);
  if (*pcVar2 == '\0') {
    func_0x0200945c(*(undefined4 *)(iRam03b1972c + 0x3b196f0));
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(iRam03b19730 + 0x3b19704) + 0x74) == 0) {
    func_0x02009474();
  }
  uVar1 = func_0x03b22e28(param_1,param_2);
  return uVar1 ^ 1;
}

