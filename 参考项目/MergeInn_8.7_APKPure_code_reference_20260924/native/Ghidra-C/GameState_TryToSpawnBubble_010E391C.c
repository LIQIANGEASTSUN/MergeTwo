// Tool: Ghidra 12.1.2 with no global analysis; native pseudocode, not original C#
// Source candidate: GameState.TryToSpawnBubble 0x10E391C; GameState::TryToSpawnBubble()
// Image base: 0x10000; Ghidra address: 010f391c; native size hint: 0x47C


void GameState_TryToSpawnBubble_010E391C
               (int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
               undefined4 param_6)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  float fVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  char *pcVar8;
  int iVar9;
  int *piVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  
  pcVar8 = (char *)(iRam010f3d44 + 0x10f3944);
  if (*pcVar8 == '\0') {
    func_0x00f6b160(*(undefined4 *)(iRam010f3d48 + 0x10f395c));
    func_0x00f6b160(*(undefined4 *)(iRam010f3d4c + 0x10f3968));
    func_0x00f6b160(*(undefined4 *)(iRam010f3d50 + 0x10f3974));
    func_0x00f6b160(*(undefined4 *)(iRam010f3d54 + 0x10f3980));
    func_0x00f6b160(*(undefined4 *)(iRam010f3d58 + 0x10f398c));
    func_0x00f6b160(*(undefined4 *)(iRam010f3d5c + 0x10f3998));
    func_0x00f6b160(*(undefined4 *)(iRam010f3d60 + 0x10f39a4));
    func_0x00f6b160(*(undefined4 *)(iRam010f3d64 + 0x10f39b0));
    func_0x00f6b160(*(undefined4 *)(iRam010f3d68 + 0x10f39bc));
    func_0x00f6b160(*(undefined4 *)(iRam010f3d6c + 0x10f39c8));
    *pcVar8 = '\x01';
  }
  fVar1 = (float)func_0x02008230(0,0x3f800000,0);
  if (param_2 == 0) {
    func_0x00f6b3d0();
  }
  piVar2 = (int *)func_0x010f3d98(param_1,*(undefined4 *)(param_2 + 0x14));
  iVar3 = *(int *)(param_2 + 0x4c);
  if ((iVar3 != 10 && iVar3 != 0xc) && (iVar3 != 0xd && piVar2 != (int *)0x0)) {
    iVar3 = **(int **)(**(int **)(iRam010f3d70 + 0x10f3a38) + 0x5c);
    if (iVar3 == 0) {
      func_0x00f6b3d0();
    }
    iVar3 = func_0x01534d9c(iVar3,0);
    if ((iVar3 != 0) &&
       (fVar4 = (float)(**(code **)(*piVar2 + 0xf8))(piVar2,*(undefined4 *)(*piVar2 + 0xfc)),
       fVar1 <= fVar4)) {
      iVar3 = *(int *)(param_1 + 0x30);
      if (iVar3 == 0) {
        func_0x00f6b3d0();
      }
      if ((-1 < *(int *)(iVar3 + 0x1c)) &&
         (iVar3 = (**(code **)(*piVar2 + 0xe8))(piVar2,*(undefined4 *)(*piVar2 + 0xec)), iVar3 != 0)
         ) {
        piVar10 = *(int **)(iRam010f3d74 + 0x10f3acc);
        iVar12 = *(int *)(param_1 + 0x54);
        iVar3 = *piVar10;
        if (*(int *)(iVar3 + 0x74) == 0) {
          func_0x00f6b294();
          iVar3 = *piVar10;
        }
        puVar5 = *(undefined4 **)(iVar3 + 0x5c);
        iVar9 = puVar5[7];
        if (iVar9 == 0) {
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x00f6b294();
            puVar5 = *(undefined4 **)(*piVar10 + 0x5c);
          }
          uVar11 = *puVar5;
          iVar9 = func_0x00f6b3c4(**(undefined4 **)(iRam010f3d78 + 0x10f3b18));
          func_0x01ddde88(iVar9,uVar11,**(undefined4 **)(iRam010f3d7c + 0x10f3b38),0);
          *(int *)(*(int *)(**(int **)(iRam010f3d80 + 0x10f3b4c) + 0x5c) + 0x1c) = iVar9;
        }
        if (iVar12 == 0) {
          func_0x00f6b3d0();
        }
        iVar3 = func_0x02c03354(iVar12,iVar9,**(undefined4 **)(iRam010f3d84 + 0x10f3b70));
        if (iVar3 == 0) {
          func_0x00f6b3d0();
        }
        iVar12 = *(int *)(param_1 + 0x30);
        iVar3 = *(int *)(iVar3 + 0xc);
        if (iVar12 == 0) {
          func_0x00f6b3d0();
        }
        if (*(int *)(iVar12 + 0x1c) <= iVar3) {
          return;
        }
      }
      uVar11 = func_0x010f064c(param_1,param_3,param_4,param_6);
      if (*(int *)(**(int **)(iRam010f3d88 + 0x10f3bcc) + 0x74) == 0) {
        func_0x00f6b294();
      }
      iVar3 = func_0x020081fc(uVar11,0);
      if (iVar3 != 0) {
        uVar6 = *(undefined4 *)(param_1 + 0x44);
        iStack_3c = 0;
        uStack_40 = 0;
        uStack_38 = 0;
        func_0x01d4a7f0(&uStack_40,param_3,param_4,**(undefined4 **)(iRam010f3d8c + 0x10f3c04));
        func_0x010e8708(param_1,param_2,0,uVar11,1,uVar6,uStack_40,iStack_3c,uStack_38,1,0xffffffff,
                        0,1,0xffffffff,0);
        iVar3 = (**(code **)(*piVar2 + 0xe0))(piVar2,*(undefined4 *)(*piVar2 + 0xe4));
        if (iVar3 != 0) {
          uVar11 = *(undefined4 *)(param_1 + 0x40);
          iVar3 = *(int *)(*(int *)(**(int **)(iRam010f3d90 + 0x10f3c94) + 0x5c) + 8);
          if (iVar3 == 0) {
            func_0x00f6b3d0();
          }
          func_0x01543c64(iVar3,uVar11,0);
        }
        iVar3 = **(int **)(**(int **)(iRam010f3d94 + 0x10f3cc8) + 0x5c);
        if (iVar3 == 0) {
          func_0x00f6b3d0();
        }
        uVar7 = 0;
        func_0x01541650(iVar3,0);
        iVar12 = *(int *)(param_1 + 0x30);
        (**(code **)(*piVar2 + 0xf0))(&uStack_40,piVar2,*(undefined4 *)(*piVar2 + 0xf4));
        iVar3 = iStack_3c;
        if (iVar12 == 0) {
          func_0x00f6b3d0();
        }
        if ((iVar3 <= *(int *)(iVar12 + 0x14)) && (uVar7 = 0, *(char *)(iVar12 + 0x18) != '\0')) {
          uVar7 = 1;
        }
        func_0x0150d7b0(param_2,uVar7,0);
      }
    }
  }
  return;
}

