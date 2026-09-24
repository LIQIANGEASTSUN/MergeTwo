
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01cce728(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar5 = (char *)(_UNK_01ccea48 + 0x1cce73c);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01ccea4c + 0x1cce750));
    func_0x01438628(*(undefined4 *)(_UNK_01ccea50 + 0x1cce75c));
    func_0x01438628(*(undefined4 *)(_UNK_01ccea54 + 0x1cce768));
    func_0x01438628(*(undefined4 *)(_UNK_01ccea58 + 0x1cce774));
    func_0x01438628(*(undefined4 *)(_UNK_01ccea5c + 0x1cce780));
    func_0x01438628(*(undefined4 *)(_UNK_01ccea60 + 0x1cce78c));
    func_0x01438628(*(undefined4 *)(_UNK_01ccea64 + 0x1cce798));
    func_0x01438628(*(undefined4 *)(_UNK_01ccea68 + 0x1cce7a4));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x1a98,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x1a98,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar7 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x024f56d0(iVar7,uVar9,&uStack_30,uVar4,0,0);
    uVar2 = func_0x024f56e0(&uStack_30,0,0);
    return uVar2;
  }
  iVar1 = (**(code **)(*param_1 + 0x110))(param_1,0,*(undefined4 *)(*param_1 + 0x114));
  if (iVar1 != 0) {
    if (*(int *)(**(int **)(_UNK_01ccea6c + 0x1cce81c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x02c35d10(0x4c,0);
    if (iVar1 != 0) {
      iVar1 = FUN_01ccc5a4(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(char *)(iVar1 + 0xc) != '\0') {
        iVar1 = FUN_01ccc5a4(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (*(char *)(iVar1 + 0x48) == '\0') {
          if (*(int *)(**(int **)(_UNK_01ccea70 + 0x1cce894) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01ccea74 + 0x1cce8b0));
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          uVar11 = func_0x026ffbe0(iVar1,0);
          iVar7 = (int)((ulonglong)uVar11 >> 0x20);
          iVar1 = FUN_01ccc5a4(param_1);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar1 + 0x2c);
          bVar10 = *(uint *)(iVar1 + 0x28) < (uint)uVar11;
          if ((int)(iVar3 - (iVar7 + (uint)bVar10)) < 0 !=
              (SBORROW4(iVar3,iVar7) != SBORROW4(iVar3 - iVar7,(uint)bVar10))) {
            iVar1 = FUN_01ccc5a4(param_1);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            func_0x026a77ac(iVar1,1,0);
            if (*(int *)(**(int **)(_UNK_01ccea78 + 0x1cce934) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01ccea7c + 0x1cce950));
            piVar6 = *(int **)(_UNK_01ccea80 + 0x1cce964);
            iVar7 = *piVar6;
            if (*(int *)(iVar7 + 0x74) == 0) {
              func_0x014387a4();
              iVar7 = *piVar6;
            }
            iVar8 = **(int **)(_UNK_01ccea84 + 0x1cce984);
            iVar3 = *(int *)(iVar8 + 0x1c);
            uVar9 = *(undefined4 *)(*(int *)(iVar7 + 0x5c) + 0xd3c);
            if (iVar3 == 0) {
              func_0x014909d8(iVar8);
              iVar3 = *(int *)(iVar8 + 0x1c);
            }
            iVar7 = *(int *)(iVar3 + 8);
            if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
              iVar7 = func_0x0149097c();
            }
            if (*(int *)(iVar7 + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar7 = *(int *)(*(int *)(iVar8 + 0x1c) + 8);
            if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
              iVar7 = func_0x0149097c();
            }
            uVar4 = **(undefined4 **)(iVar7 + 0x5c);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            uVar9 = func_0x02b0c90c(iVar1,uVar9,uVar4,0);
            if (*(int *)(**(int **)(_UNK_01ccea88 + 0x1ccea18) + 0x74) == 0) {
              func_0x014387a4();
            }
            uVar2 = func_0x024eec50(uVar9,0,0);
            return uVar2 ^ 1;
          }
        }
      }
    }
  }
  return 0;
}

