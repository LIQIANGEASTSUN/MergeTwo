
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02eba4c0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char *pcVar11;
  undefined4 uVar12;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar11 = (char *)(_UNK_02eba7ac + 0x2eba4e0);
  if (*pcVar11 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02eba7b0 + 0x2eba4f4));
    func_0x01438628(*(undefined4 *)(_UNK_02eba7b4 + 0x2eba500));
    func_0x01438628(*(undefined4 *)(_UNK_02eba7b8 + 0x2eba50c));
    func_0x01438628(*(undefined4 *)(_UNK_02eba7bc + 0x2eba518));
    func_0x01438628(*(undefined4 *)(_UNK_02eba7c0 + 0x2eba524));
    *pcVar11 = '\x01';
  }
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_48 = 0;
  uStack_38 = 0;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  iVar7 = func_0x02953fd4(0x6a0b,0);
  if (iVar7 == 0) {
    iVar7 = func_0x02ebcef4(param_1,param_2);
    iVar8 = func_0x02ebc9c0(param_1);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    iVar8 = *(int *)(iVar8 + 0x20);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    iVar8 = func_0x04cd2d7c(iVar8,param_2,**(undefined4 **)(_UNK_02eba7c4 + 0x2eba5cc));
    if (iVar8 == 0) {
      iVar8 = func_0x02ebc9c0(param_1);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      iVar8 = *(int *)(iVar8 + 0x20);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      func_0x03b75ba0(iVar8,param_2,**(undefined4 **)(_UNK_02eba7c8 + 0x2eba614));
    }
    if (*(int *)(**(int **)(_UNK_02eba7cc + 0x2eba628) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar8 = func_0x0202346c(0);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uStack_28 = *(undefined4 *)(iVar7 + 8);
    uVar9 = func_0x01524ffc(&uStack_28,0);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    func_0x020257a4(iVar8,0x1f7,uVar9,0,0,0,0);
    uVar9 = *(undefined4 *)(iVar7 + 0x10);
    uVar12 = *(undefined4 *)(iVar7 + 0x14);
    if (*(int *)(**(int **)(_UNK_02eba7d0 + 0x2eba6c0) + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar10 = func_0x02af43a8(uVar9,uVar12,0);
    uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iVar8 = **(int **)(**(int **)(_UNK_02eba7d4 + 0x2eba700) + 0x5c);
    uStack_38 = 0;
    uStack_28 = *(undefined4 *)(iVar7 + 8);
    uStack_48 = 0x5d;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
    uStack_44 = func_0x01524ffc(&uStack_28,0);
    func_0x014385cc((uint)&uStack_48 | 4,uStack_44);
    uVar6 = uStack_2c;
    uVar5 = uStack_30;
    uVar4 = uStack_34;
    uVar3 = uStack_38;
    uVar2 = uStack_3c;
    uVar1 = uStack_40;
    uVar12 = uStack_44;
    uVar9 = uStack_48;
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    FUN_02e66ffc(iVar8,uVar10,uVar9,uVar12,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,1,0);
  }
  else {
    iVar7 = func_0x029540a4(0x6a0b,0);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    func_0x0286c2b8(iVar7,param_1,param_2,0);
  }
  return;
}

