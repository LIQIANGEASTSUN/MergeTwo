// Tool: Ghidra 12.1.2 with no global analysis; native pseudocode, not original C#
// Source candidate: GameState.TryApplyBooster 0x10E80D4; private bool TryApplyBooster(Item originItem, Item targetItem, ref ItemData resultItemData, ref Item resultItem) {
// Image base: 0x10000; Ghidra address: 010f80d4; native size hint: 0x128


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool GameState_TryApplyBooster_010E80D4
               (undefined4 param_1,int *param_2,int param_3,undefined4 *param_4,int *param_5)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  bool bVar8;
  uint in_fpscr;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar3 = (char *)(_UNK_010f84d4 + 0x10f80f4);
  if (*pcVar3 == '\0') {
    func_0x00f6b160(*(undefined4 *)(_UNK_010f84d8 + 0x10f810c));
    func_0x00f6b160(*(undefined4 *)(_UNK_010f84dc + 0x10f8118));
    func_0x00f6b160(*(undefined4 *)(_UNK_010f84e0 + 0x10f8124));
    func_0x00f6b160(*(undefined4 *)(_UNK_010f84e4 + 0x10f8130));
    *pcVar3 = '\x01';
  }
  piVar6 = (int *)0x0;
  if (param_2 != (int *)0x0) {
    uVar2 = (uint)*(byte *)(**(int **)(_UNK_010f84e8 + 0x10f8150) + 0xb8);
    if ((uVar2 <= *(byte *)(*param_2 + 0xb8)) &&
       (piVar6 = param_2,
       *(int *)(*(int *)(*param_2 + 100) + uVar2 * 4 + -4) != **(int **)(_UNK_010f84e8 + 0x10f8150))
       ) {
      piVar6 = (int *)0x0;
    }
  }
  piVar7 = *(int **)(_UNK_010f84ec + 0x10f8188);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    func_0x00f6b294();
  }
  bVar8 = false;
  iVar1 = func_0x020081fc(piVar6,0);
  if (iVar1 != 0) {
    if (piVar6 == (int *)0x0) {
      func_0x00f6b3d0();
    }
    iVar1 = (**(code **)(*piVar6 + 0x1c8))(piVar6,param_3,*(undefined4 *)(*piVar6 + 0x1cc));
    if (iVar1 != 0) {
      if (param_3 == 0) {
        func_0x00f6b3d0();
      }
      iVar1 = *(int *)(param_3 + 0x10);
      if (iVar1 == 0) {
        func_0x00f6b3d0();
      }
      uVar9 = VectorSignedToFloat(*(undefined4 *)(iVar1 + 0x14),(byte)(in_fpscr >> 0x16) & 3);
      uVar10 = VectorSignedToFloat(*(undefined4 *)(iVar1 + 0x18),(byte)(in_fpscr >> 0x16) & 3);
      uVar9 = func_0x010f064c(param_1,uVar9,uVar10,iVar1);
      if (param_2 == (int *)0x0) {
        func_0x00f6b3d0();
      }
      iVar4 = param_2[4];
      if (*(int *)(*piVar7 + 0x74) == 0) {
        func_0x00f6b294();
      }
      iVar4 = func_0x020081fc(iVar4,0);
      if (iVar4 == 0) {
        iVar4 = param_2[0x21];
        if (iVar4 == 0) {
          func_0x00f6b3d0();
        }
        if (*(int *)(iVar4 + 0xd0) == 3) {
          if (*(int *)(*piVar7 + 0x74) == 0) {
            func_0x00f6b294();
          }
          iVar4 = func_0x02007e9c(uVar9,0,0);
          if (iVar4 != 0) {
            piVar6 = *(int **)(_UNK_010f84f0 + 0x10f82d0);
            if (*(int *)(*piVar6 + 0x74) == 0) {
              func_0x00f6b294();
            }
            pcVar3 = (char *)(_UNK_010f84f4 + 0x10f82ec);
            if (*pcVar3 == '\0') {
              func_0x00f6b160(*(undefined4 *)(_UNK_010f84f8 + 0x10f8300));
              *pcVar3 = '\x01';
            }
            iVar1 = *piVar6;
            if (*(int *)(iVar1 + 0x74) == 0) {
              func_0x00f6b294();
              iVar1 = *piVar6;
            }
            iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 4);
            if (*(int *)(**(int **)(_UNK_010f84fc + 0x10f832c) + 0x74) == 0) {
              func_0x00f6b294(**(int **)(_UNK_010f84fc + 0x10f832c));
            }
            func_0x01071364(&uStack_30,0);
            if (iVar1 == 0) {
              func_0x00f6b3d0();
            }
            func_0x0137e9e0(iVar1,uStack_30,uStack_2c,uStack_28,0,0);
            return false;
          }
        }
      }
      else {
        iVar4 = param_2[4];
        if (iVar4 == 0) {
          func_0x00f6b3d0();
        }
        func_0x010dcc80(iVar4,0);
      }
      iVar5 = param_2[0x21];
      iVar4 = *(int *)(param_3 + 0x84);
      if (iVar5 == 0) {
        func_0x00f6b3d0();
      }
      if (*(int *)(iVar5 + 0xd0) == 2) {
        if (iVar4 == 0) {
          func_0x00f6b3d0();
        }
        iVar5 = *(int *)(iVar4 + 8);
        iVar4 = func_0x01119de8(iVar4,0);
        if (iVar5 == 0) {
          func_0x00f6b3d0();
        }
        uVar9 = func_0x010dd824(iVar5,iVar4 + 1);
        iVar1 = GameState_MergeTwoItems_010E8C14
                          (param_1,iVar1,param_2,param_3,uVar9,param_4,param_5);
        bVar8 = iVar1 != 0;
      }
      else {
        iVar1 = param_2[0x21];
        if (iVar1 == 0) {
          func_0x00f6b3d0();
        }
        if (*(int *)(iVar1 + 0xd0) == 3) {
          if (iVar4 == 0) {
            func_0x00f6b3d0();
          }
          iVar5 = *(int *)(iVar4 + 8);
          iVar1 = func_0x01119de8(iVar4,0);
          if (iVar5 == 0) {
            func_0x00f6b3d0();
          }
          uVar9 = func_0x010dd824(iVar5,iVar1 + -1);
          func_0x010f971c(param_1,param_2,param_3,uVar9,param_4,param_5);
        }
        else {
          iVar1 = param_2[0x21];
          if (iVar1 == 0) {
            func_0x00f6b3d0();
          }
          if (*(int *)(iVar1 + 0xd0) == 1) {
            *param_4 = *(undefined4 *)(param_3 + 0x84);
            *param_5 = param_3;
            func_0x010f9acc(param_1,param_2,param_3);
          }
        }
        bVar8 = true;
      }
    }
  }
  return bVar8;
}

