
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01aeead8(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_01aeee18 + 0x1aeeaf4);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01aeee1c + 0x1aeeb08));
    func_0x01438628(*(undefined4 *)(_UNK_01aeee20 + 0x1aeeb14));
    func_0x01438628(*(undefined4 *)(_UNK_01aeee24 + 0x1aeeb20));
    func_0x01438628(*(undefined4 *)(_UNK_01aeee28 + 0x1aeeb2c));
    func_0x01438628(*(undefined4 *)(_UNK_01aeee2c + 0x1aeeb38));
    func_0x01438628(*(undefined4 *)(_UNK_01aeee30 + 0x1aeeb44));
    func_0x01438628(*(undefined4 *)(_UNK_01aeee34 + 0x1aeeb50));
    func_0x01438628(*(undefined4 *)(_UNK_01aeee38 + 0x1aeeb5c));
    func_0x01438628(*(undefined4 *)(_UNK_01aeee3c + 0x1aeeb68));
    *pcVar5 = '\x01';
  }
  iVar6 = 0;
  iVar1 = func_0x02953fd4(0xa4c7,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xa4c7,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar5 = (char *)(_UNK_028955b0 + 0x28954bc);
    if (*pcVar5 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028955b4 + 0x28954d0),param_1,param_2,0);
      *pcVar5 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0);
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
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x024f56d0(iVar6,uVar8,&uStack_38,uVar4,0,0);
    iVar1 = func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_028955b8 + 0x28955a0));
    return iVar1;
  }
  iVar1 = FUN_01ae4df4(param_1);
  if ((param_2 != 0 && iVar1 != 0) && (iVar1 = FUN_01ae5790(param_1), iVar1 != 0)) {
    iVar6 = *(int *)(param_2 + 0x30);
    iVar1 = FUN_01ae5790(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (iVar6 != *(int *)(iVar1 + 0xc)) {
      iVar6 = *(int *)(param_2 + 0x30);
      iVar1 = FUN_01ae5790(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (iVar6 != *(int *)(iVar1 + 0x10)) {
        return 0;
      }
    }
    iVar6 = func_0x014388d4(**(undefined4 **)(_UNK_01aeee40 + 0x1aeec4c));
    func_0x024f0510(iVar6,**(undefined4 **)(_UNK_01aeee44 + 0x1aeec60));
    if (*(int *)(**(int **)(_UNK_01aeee48 + 0x1aeec74) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01aeee4c + 0x1aeec90));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x24);
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      iVar7 = 0;
      puVar10 = *(undefined4 **)(_UNK_01aeee50 + 0x1aeeccc);
      do {
        iVar2 = func_0x0152983c(iVar1,iVar7,*puVar10);
        if (((iVar2 != 0) && (*(int *)(iVar2 + 8) == *(int *)(param_2 + 8))) &&
           (iVar9 = *(int *)(iVar2 + 0x10), iVar9 != 0)) {
          iVar1 = 0;
          while( true ) {
            if (iVar9 == 0) {
              func_0x014388e4();
            }
            if (*(int *)(iVar9 + 0xc) <= iVar1) break;
            iVar7 = *(int *)(iVar2 + 0x14);
            if (((iVar7 != 0) && (iVar1 < *(int *)(iVar7 + 0xc))) &&
               (iVar7 = func_0x024f0530(iVar7,iVar1,**(undefined4 **)(_UNK_01aeee54 + 0x1aeed54)),
               0 < iVar7)) {
              do {
                iVar9 = *(int *)(iVar2 + 0x10);
                if (iVar9 == 0) {
                  func_0x014388e4();
                }
                uVar8 = func_0x024f0530(iVar9,iVar1,**(undefined4 **)(_UNK_01aeee58 + 0x1aeed88));
                if (iVar6 == 0) {
                  func_0x014388e4();
                }
                iVar9 = *(int *)(iVar6 + 8);
                uVar12 = *(uint *)(iVar6 + 0xc);
                piVar3 = *(int **)(_UNK_01aeee5c + 0x1aeedc0);
                *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
                iVar11 = *piVar3;
                if (iVar9 == 0) {
                  func_0x014388e4();
                }
                if (uVar12 < *(uint *)(iVar9 + 0xc)) {
                  *(uint *)(iVar6 + 0xc) = uVar12 + 1;
                  *(undefined4 *)(iVar9 + uVar12 * 4 + 0x10) = uVar8;
                }
                else {
                  func_0x024f0520(iVar6,uVar8,
                                  *(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38));
                }
                iVar7 = iVar7 + -1;
              } while (iVar7 != 0);
            }
            iVar9 = *(int *)(iVar2 + 0x10);
            iVar1 = iVar1 + 1;
          }
          return iVar6;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(iVar1 + 0xc));
    }
  }
  return iVar6;
}

