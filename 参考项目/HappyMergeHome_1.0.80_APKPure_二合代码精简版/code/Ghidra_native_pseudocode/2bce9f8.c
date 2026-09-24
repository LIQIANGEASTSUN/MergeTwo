
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02bde9f8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
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
  
  pcVar5 = (char *)(_UNK_02bdec3c + 0x2bdea10);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bdec40 + 0x2bdea24));
    func_0x01438628(*(undefined4 *)(_UNK_02bdec44 + 0x2bdea30));
    func_0x01438628(*(undefined4 *)(_UNK_02bdec48 + 0x2bdea3c));
    func_0x01438628(*(undefined4 *)(_UNK_02bdec4c + 0x2bdea48));
    func_0x01438628(*(undefined4 *)(_UNK_02bdec50 + 0x2bdea54));
    func_0x01438628(*(undefined4 *)(_UNK_02bdec54 + 0x2bdea60));
    func_0x01438628(*(undefined4 *)(_UNK_02bdec58 + 0x2bdea6c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5c5a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5c5a,0);
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
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x024f56d0(iVar3,uVar4,&uStack_38,uVar2,0,0);
    uVar4 = func_0x024f56f0(&uStack_38,0,0);
    return uVar4;
  }
  iVar1 = FUN_02bad050(param_1,param_2);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar1 + 0x50) < 1) {
    iVar1 = FUN_02bad050(param_1,param_2);
    if (*(int *)(**(int **)(_UNK_02bdec5c + 0x2bdeb00) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02bdec60 + 0x2bdeb1c));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    piVar8 = *(int **)(_UNK_02bdec64 + 0x2bdeb3c);
    iVar7 = *(int *)(iVar3 + 0x2c);
    iVar3 = *piVar8;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x014387a4();
      iVar3 = *piVar8;
    }
    iVar6 = *(int *)(*(int *)(iVar3 + 0x5c) + 8);
    if (iVar6 == 0) {
      if (*(int *)(iVar3 + 0x74) == 0) {
        func_0x014387a4();
        iVar3 = *piVar8;
      }
      uVar4 = **(undefined4 **)(iVar3 + 0x5c);
      iVar6 = func_0x014388d4(**(undefined4 **)(_UNK_02bdec68 + 0x2bdeb88));
      func_0x03a062d0(iVar6,uVar4,**(undefined4 **)(_UNK_02bdec6c + 0x2bdeba8),0);
      piVar8 = (int *)(*(int *)(*piVar8 + 0x5c) + 8);
      *piVar8 = iVar6;
      func_0x014385cc(piVar8,iVar6);
    }
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x024f0f0c(iVar7,iVar6,**(undefined4 **)(_UNK_02bdec70 + 0x2bdebe0));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar4 = *(undefined4 *)(iVar3 + 0xc);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    FUN_026f64c0(iVar1,uVar4,0);
  }
  iVar1 = FUN_02bad050(param_1,param_2);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  return *(undefined4 *)(iVar1 + 0x50);
}

