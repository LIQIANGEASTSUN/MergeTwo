// Tool: Ghidra 12.1.2 with no global analysis; native pseudocode, not original C#
// Source candidate: GameState.Place 0x10E2C84; GameState::Place()
// Image base: 0x10000; Ghidra address: 010f2c84; native size hint: 0x240


undefined4 GameState_Place_010E2C84(undefined4 param_1,int param_2,int *param_3)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  undefined4 uVar4;
  
  pcVar2 = (char *)(iRam010f2ea0 + 0x10f2ca0);
  if (*pcVar2 == '\0') {
    func_0x00f6b160(*(undefined4 *)(iRam010f2ea4 + 0x10f2cb4));
    func_0x00f6b160(*(undefined4 *)(iRam010f2ea8 + 0x10f2cc0));
    func_0x00f6b160(*(undefined4 *)(iRam010f2eac + 0x10f2ccc));
    func_0x00f6b160(*(undefined4 *)(iRam010f2eb0 + 0x10f2cd8));
    *pcVar2 = '\x01';
  }
  if (param_3 == (int *)0x0) {
    func_0x00f6b3d0();
  }
  uVar4 = 0;
  func_0x0111cc08(param_3,0);
  piVar3 = *(int **)(iRam010f2eb4 + 0x10f2d08);
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x00f6b294();
  }
  iVar1 = func_0x02007e9c(param_3,0,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x00f6b3d0();
    }
    if (*(char *)(param_2 + 0x28) != '\0') {
      iVar1 = **(int **)(**(int **)(iRam010f2eb8 + 0x10f2d54) + 0x5c);
      if (iVar1 == 0) {
        func_0x00f6b3d0();
      }
      uVar4 = 0;
      iVar1 = func_0x01535418(iVar1,0);
      if (iVar1 == 0) {
        if (param_3 == (int *)0x0) {
          func_0x00f6b3d0();
        }
        iVar1 = param_3[4];
        if (*(int *)(*piVar3 + 0x74) == 0) {
          func_0x00f6b294();
        }
        uVar4 = 0;
        iVar1 = func_0x020081fc(iVar1,0);
        if (iVar1 != 0) {
          iVar1 = param_3[4];
          if (iVar1 == 0) {
            func_0x00f6b3d0();
          }
          func_0x010dcc80(iVar1,0);
        }
        (**(code **)(*param_3 + 0x108))(param_3,param_2,0,*(undefined4 *)(*param_3 + 0x10c));
        func_0x010dcc80(param_2,param_3);
        iVar1 = func_0x010e41b8(param_1,param_3);
        if (iVar1 != 0) {
          (**(code **)(*param_3 + 0x148))(param_3,param_2,0,*(undefined4 *)(*param_3 + 0x14c));
          piVar3 = *(int **)(iRam010f2ebc + 0x10f2e3c);
          iVar1 = *piVar3;
          if (*(int *)(iVar1 + 0x74) == 0) {
            func_0x00f6b294();
            iVar1 = *piVar3;
          }
          uVar4 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x2c);
          if (*(int *)(**(int **)(iRam010f2ec0 + 0x10f2e5c) + 0x74) == 0) {
            func_0x00f6b294(**(int **)(iRam010f2ec0 + 0x10f2e5c));
          }
          func_0x011eea64(uVar4,0x3f800000,0);
          func_0x0108ebb4(5,0);
          uVar4 = 1;
        }
      }
    }
  }
  return uVar4;
}

