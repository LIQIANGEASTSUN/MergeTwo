
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02f1cda0(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar5 = (char *)(_UNK_02f1d104 + 0x2f1cdb8);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f1d108 + 0x2f1cdcc));
    func_0x01438628(*(undefined4 *)(_UNK_02f1d10c + 0x2f1cdd8));
    func_0x01438628(*(undefined4 *)(_UNK_02f1d110 + 0x2f1cde4));
    func_0x01438628(*(undefined4 *)(_UNK_02f1d114 + 0x2f1cdf0));
    func_0x01438628(*(undefined4 *)(_UNK_02f1d118 + 0x2f1cdfc));
    func_0x01438628(*(undefined4 *)(_UNK_02f1d11c + 0x2f1ce08));
    func_0x01438628(*(undefined4 *)(_UNK_02f1d120 + 0x2f1ce14));
    func_0x01438628(*(undefined4 *)(_UNK_02f1d124 + 0x2f1ce20));
    *pcVar5 = '\x01';
  }
  uVar6 = 0;
  iVar2 = func_0x02953fd4(0x1a4e,0);
  if (iVar2 == 0) {
    iVar2 = FUN_02f1963c(param_1);
    if (iVar2 != 0) {
      uVar6 = 0;
      iVar2 = (**(code **)(*param_1 + 0x110))(param_1,0,*(undefined4 *)(*param_1 + 0x114));
      if (iVar2 != 0) {
        iVar2 = FUN_02f196e8(param_1);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        if (*(char *)(iVar2 + 0x2c) == '\0') {
          piVar10 = *(int **)(_UNK_02f1d128 + 0x2f1ced8);
          if (*(int *)(*piVar10 + 0x74) == 0) {
            func_0x014387a4();
          }
          puVar11 = *(undefined4 **)(_UNK_02f1d12c + 0x2f1cef4);
          iVar2 = func_0x03b2c734(*puVar11);
          piVar9 = *(int **)(_UNK_02f1d130 + 0x2f1cf08);
          iVar4 = *piVar9;
          if (*(int *)(iVar4 + 0x74) == 0) {
            func_0x014387a4();
            iVar4 = *piVar9;
          }
          uVar3 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 4);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          uVar6 = 0;
          iVar2 = func_0x02b76b98(iVar2,0,uVar3,0);
          if (iVar2 == 0) {
            iVar2 = FUN_02f196e8(param_1);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            cVar1 = *(char *)(iVar2 + 0xc);
            if (*(int *)(**(int **)(_UNK_02f1d134 + 0x2f1cf74) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_02f1d138 + 0x2f1cf94));
            piVar7 = *(int **)(_UNK_02f1d13c + 0x2f1cfa8);
            iVar4 = *piVar7;
            if (*(int *)(iVar4 + 0x74) == 0) {
              func_0x014387a4();
              iVar4 = *piVar7;
            }
            if (cVar1 == '\0') {
              uVar6 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x490);
            }
            else {
              uVar6 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x484);
            }
            iVar8 = **(int **)(_UNK_02f1d140 + 0x2f1cfd0);
            iVar4 = *(int *)(iVar8 + 0x1c);
            if (iVar4 == 0) {
              func_0x014909d8(iVar8);
              iVar4 = *(int *)(iVar8 + 0x1c);
            }
            iVar4 = *(int *)(iVar4 + 8);
            if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
              iVar4 = func_0x0149097c();
            }
            if (*(int *)(iVar4 + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar4 = *(int *)(*(int *)(iVar8 + 0x1c) + 8);
            if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
              iVar4 = func_0x0149097c();
            }
            uVar3 = **(undefined4 **)(iVar4 + 0x5c);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            func_0x02b0c90c(iVar2,uVar6,uVar3,0);
            if (*(int *)(*piVar10 + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar2 = func_0x03b2c734(*puVar11);
            iVar4 = *piVar9;
            if (*(int *)(iVar4 + 0x74) == 0) {
              func_0x014387a4();
              iVar4 = *piVar9;
            }
            uVar6 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 4);
            if (*(int *)(**(int **)(_UNK_02f1d144 + 0x2f1d098) + 0x74) == 0) {
              func_0x014387a4(**(int **)(_UNK_02f1d144 + 0x2f1d098));
            }
            uStack_38 = func_0x02aed6d8(0);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            uStack_30 = 0;
            uStack_2c = 0;
            uStack_28 = 0;
            func_0x02b768cc(iVar2,0,uVar6);
            uVar6 = 1;
          }
        }
      }
    }
    return uVar6;
  }
  iVar2 = func_0x029540a4(0x1a4e,0);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  func_0x024f56c0(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01523a6c(&uStack_30,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01523a6c(&uStack_30,param_1,0);
  iVar4 = *(int *)(iVar2 + 8);
  uVar6 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  uVar3 = 2;
  if (iVar2 == 0) {
    uVar3 = 1;
  }
  func_0x024f56d0(iVar4,uVar6,&uStack_30,uVar3,0,0);
  uVar6 = func_0x024f56e0(&uStack_30,0,0);
  return uVar6;
}

