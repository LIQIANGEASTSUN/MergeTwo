// Tool: Ghidra 12.1.2 with no global analysis; native pseudocode, not original C#
// Source candidate: GameStateSaveCoroutine.MoveNext 0x113B4FC; GameStateSave.<SaveAsync>d__26::MoveNext()
// Image base: 0x10000; Ghidra address: 0114b4fc; native size hint: 0x128


undefined4 GameStateSaveCoroutine_MoveNext_0113B4FC(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  
  pcVar2 = (char *)(iRam0114b610 + 0x114b510);
  if (*pcVar2 == '\0') {
    func_0x00f6b160(*(undefined4 *)(iRam0114b614 + 0x114b524));
    func_0x00f6b160(*(undefined4 *)(iRam0114b618 + 0x114b530));
    *pcVar2 = '\x01';
  }
  iVar3 = *(int *)(param_1 + 0x14);
  if (*(int *)(param_1 + 8) == 1) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 8) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (*(char *)(param_1 + 0x10) == '\0') {
      *(undefined4 *)(param_1 + 8) = 1;
      *(undefined4 *)(param_1 + 0xc) = 0;
      return 1;
    }
  }
  if (iVar3 == 0) {
    func_0x00f6b3d0();
  }
  uVar1 = func_0x01148fc8(iVar3);
  if (*(int *)(**(int **)(iRam0114b61c + 0x114b5a4) + 0x74) == 0) {
    func_0x00f6b294();
  }
  func_0x0193a4f0(uVar1,iVar3,0,**(undefined4 **)(iRam0114b620 + 0x114b5c8));
  if (iVar3 == 0) {
    func_0x00f6b3d0();
  }
  iVar4 = *(int *)(iVar3 + 0x10);
  if (iVar4 == 0) {
    func_0x00f6b3d0();
  }
  func_0x0114a5c4(iVar4);
  func_0x0109a1a8(0,0);
  *(undefined4 *)(iVar3 + 0x14) = 0;
  return 0;
}

