
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019ef4bc(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_019ef83c + 0x19ef4d8);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_019ef840 + 0x19ef4ec));
    func_0x01438628(*(undefined4 *)(_UNK_019ef844 + 0x19ef4f8));
    func_0x01438628(*(undefined4 *)(_UNK_019ef848 + 0x19ef504));
    func_0x01438628(*(undefined4 *)(_UNK_019ef84c + 0x19ef510));
    func_0x01438628(*(undefined4 *)(_UNK_019ef850 + 0x19ef51c));
    func_0x01438628(*(undefined4 *)(_UNK_019ef854 + 0x19ef528));
    func_0x01438628(*(undefined4 *)(_UNK_019ef858 + 0x19ef534));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x3733,0);
  if (iVar1 == 0) {
    if (param_2 != 0) {
      iVar6 = *(int *)(param_2 + 0x1c);
      iVar1 = 0;
      if (iVar6 != 0) {
        iVar1 = *(int *)(param_2 + 0x20);
      }
      if (iVar6 != 0 && iVar1 != 0) {
        iVar3 = *(int *)(iVar6 + 0xc);
        if (iVar3 != 0) {
          iVar1 = *(int *)(iVar1 + 0xc);
        }
        if ((iVar3 != 0 && iVar1 != 0) && (iVar3 == iVar1)) {
          iVar1 = 0;
          puVar8 = *(undefined4 **)(_UNK_019ef85c + 0x19ef5dc);
          piVar9 = *(int **)(_UNK_019ef860 + 0x19ef5e4);
          while( true ) {
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            if (*(int *)(iVar6 + 0xc) <= iVar1) break;
            iVar6 = *(int *)(param_2 + 0x1c);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            uVar7 = func_0x024f0530(iVar6,iVar1,*puVar8);
            iVar6 = *(int *)(param_2 + 0x20);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            uVar4 = func_0x024f0530(iVar6,iVar1,*puVar8);
            iVar6 = **(int **)(*piVar9 + 0x5c);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            iVar6 = func_0x02e651cc(iVar6,uVar7,0);
            if (iVar6 == 0) {
              if (*(int *)(**(int **)(_UNK_019ef864 + 0x19ef6dc) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_019ef868 + 0x19ef6f8));
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              iVar6 = func_0x02bd1624(iVar6,0);
              if (iVar6 == 0) {
                func_0x014388e4();
                func_0x026f6b3c(0,uVar7,0);
                func_0x014388e4();
              }
              else {
                func_0x026f6b3c(iVar6,uVar7,0);
              }
              func_0x026f6bf8(iVar6,1,0);
              iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_019ef86c + 0x19ef76c));
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              func_0x02be0bf4(iVar3,iVar6,0,1,0,0);
              if (*(int *)(**(int **)(_UNK_019ef870 + 0x19ef7a8) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar3 = func_0x0202346c(0);
              iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_019ef874 + 0x19ef7d0));
              func_0x02025440(iVar2,0);
              if (iVar2 == 0) {
                func_0x014388e4();
              }
              *(undefined4 *)(iVar2 + 8) = 0x44;
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              uVar7 = *(undefined4 *)(iVar6 + 8);
              *(undefined1 *)(iVar2 + 0x25) = 1;
              *(undefined4 *)(iVar2 + 0xc) = uVar7;
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              func_0x02024d08(iVar3,iVar2,1,0);
            }
            else {
              iVar6 = **(int **)(*piVar9 + 0x5c);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              uStack_38 = 1;
              uStack_34 = 0;
              uStack_30 = 0;
              uStack_2c = 0;
              uStack_50 = 0;
              uStack_4c = 0;
              uStack_48 = 0;
              uStack_44 = 0;
              uStack_40 = 0;
              uStack_3c = 0;
              func_0x02e64460(iVar6,uVar7,uVar4);
            }
            iVar6 = *(int *)(param_2 + 0x1c);
            iVar1 = iVar1 + 1;
          }
        }
      }
    }
    return;
  }
  iVar1 = func_0x029540a4(0x3733,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x024f56c0(&uStack_50,0,param_2,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01523a6c(&uStack_38,param_1,0);
  func_0x01523a6c(&uStack_38,param_2,0);
  iVar6 = *(int *)(iVar1 + 8);
  uVar7 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  uVar4 = 3;
  if (iVar1 == 0) {
    uVar4 = 2;
  }
  func_0x024f56d0(iVar6,uVar7,&uStack_38,uVar4,0,0);
  return;
}

