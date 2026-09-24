
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02ebb11c(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  char *pcVar13;
  undefined4 uVar14;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar13 = (char *)(_UNK_02ebb4a4 + 0x2ebb13c);
  if (*pcVar13 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02ebb4a8 + 0x2ebb154));
    func_0x01438628(*(undefined4 *)(_UNK_02ebb4ac + 0x2ebb160));
    func_0x01438628(*(undefined4 *)(_UNK_02ebb4b0 + 0x2ebb16c));
    func_0x01438628(*(undefined4 *)(_UNK_02ebb4b4 + 0x2ebb178));
    func_0x01438628(*(undefined4 *)(_UNK_02ebb4b8 + 0x2ebb184));
    func_0x01438628(*(undefined4 *)(_UNK_02ebb4bc + 0x2ebb190));
    func_0x01438628(*(undefined4 *)(_UNK_02ebb4c0 + 0x2ebb19c));
    func_0x01438628(*(undefined4 *)(_UNK_02ebb4c4 + 0x2ebb1a8));
    *pcVar13 = '\x01';
  }
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_48 = 0;
  uStack_38 = 0;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  iVar8 = func_0x02953fd4(0x6a07,0);
  if (iVar8 == 0) {
    iVar8 = func_0x02ebcef4(param_1,param_2);
    iVar9 = func_0x02ebc9c0(param_1);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    iVar9 = *(int *)(iVar9 + 0x20);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    iVar9 = func_0x04cd2d7c(iVar9,param_2,**(undefined4 **)(_UNK_02ebb4c8 + 0x2ebb25c));
    if (iVar9 == 0) {
      iVar9 = func_0x02ebc9c0(param_1);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      iVar9 = *(int *)(iVar9 + 0x20);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      func_0x03b75ba0(iVar9,param_2,**(undefined4 **)(_UNK_02ebb4cc + 0x2ebb2a4));
    }
    if (*(int *)(**(int **)(_UNK_02ebb4d0 + 0x2ebb2b8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar9 = func_0x0202346c(0);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    uStack_28 = *(undefined4 *)(iVar8 + 8);
    uVar10 = func_0x01524ffc(&uStack_28,0);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    func_0x020257a4(iVar9,0x1f7,uVar10,0,0,0,0);
    uVar10 = *(undefined4 *)(iVar8 + 0x10);
    uVar14 = *(undefined4 *)(iVar8 + 0x14);
    if (*(int *)(**(int **)(_UNK_02ebb4d4 + 0x2ebb348) + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar10 = func_0x02af43a8(uVar10,uVar14,0);
    if (*(int *)(**(int **)(_UNK_02ebb4d8 + 0x2ebb380) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar9 = func_0x03b2c734(**(undefined4 **)(_UNK_02ebb4dc + 0x2ebb3a0));
    if (*(int *)(**(int **)(_UNK_02ebb4e0 + 0x2ebb3b4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar11 = func_0x04e4a028(**(undefined4 **)(_UNK_02ebb4e4 + 0x2ebb3d8));
    if (iVar11 == 0) {
      func_0x014388e4();
    }
    uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar12 = *(undefined4 *)(iVar11 + 0x10);
    uStack_38 = 0;
    uStack_28 = *(undefined4 *)(iVar8 + 8);
    uStack_48 = 0x5d;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
    uStack_44 = func_0x01524ffc(&uStack_28,0);
    func_0x014385cc((uint)&uStack_48 | 4,uStack_44);
    uVar7 = uStack_2c;
    uVar6 = uStack_30;
    uVar5 = uStack_34;
    uVar4 = uStack_38;
    uVar3 = uStack_3c;
    uVar2 = uStack_40;
    uVar1 = uStack_44;
    uVar14 = uStack_48;
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    func_0x02b75768(iVar9,uVar10,uVar12,param_2 + 10,uVar14,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,
                    uVar7,param_3,0,0);
  }
  else {
    iVar8 = func_0x029540a4(0x6a07,0);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    func_0x0286b0b0(iVar8,param_1,param_2,param_3,0);
  }
  return;
}

