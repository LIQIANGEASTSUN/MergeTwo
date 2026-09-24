
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02bd59ac(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_r4;
  char *pcVar5;
  undefined4 unaff_r5;
  int iVar6;
  undefined4 uVar7;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  pcVar5 = (char *)(_UNK_02bd5ad0 + 0x2bd59cc);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bd5ad4 + 0x2bd59e4));
    func_0x01438628(*(undefined4 *)(_UNK_02bd5ad8 + 0x2bd59f0));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5ce5,0);
  if (iVar1 == 0) {
    iVar1 = FUN_02bad050(param_1,param_4);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x03b780b0(iVar1,param_2,**(undefined4 **)(_UNK_02bd5adc + 0x2bd5a88));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x38);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar4 = **(int **)(_UNK_02bd5ae0 + 0x2bd5ac0);
    pcVar5 = (char *)(_UNK_03b75f98 + 0x3b75e88);
    if (*pcVar5 == '\0') {
      func_0x024f83cc(*(undefined4 *)(_UNK_03b75f9c + 0x3b75e9c));
      func_0x024f83cc(*(undefined4 *)(_UNK_03b75fa0 + 0x3b75ea8));
      func_0x024f83cc(*(undefined4 *)(_UNK_03b75fa4 + 0x3b75eb4));
      *pcVar5 = '\x01';
    }
    iVar6 = **(int **)(_UNK_03b75fa8 + 0x3b75ec8);
    iVar3 = *(int *)(iVar6 + 0x1c);
    if (iVar3 == 0) {
      func_0x024f83f8(iVar6);
      iVar3 = *(int *)(iVar6 + 0x1c);
    }
    iVar3 = *(int *)(iVar3 + 8);
    if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = func_0x024f83fc();
    }
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x024f83d8();
    }
    iVar3 = *(int *)(*(int *)(iVar6 + 0x1c) + 8);
    if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = func_0x024f83fc();
    }
    uVar7 = **(undefined4 **)(iVar3 + 0x5c);
    if (*(int *)(**(int **)(_UNK_03b75fac + 0x3b75f28) + 0x74) == 0) {
      func_0x024f83d8(**(int **)(_UNK_03b75fac + 0x3b75f28));
    }
    func_0x02679550(**(undefined4 **)(_UNK_03b75fb0 + 0x3b75f58),uVar7,0);
    func_0x03b75a80(iVar1,*(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x24));
    if (iVar1 == 0) {
      func_0x024f83d4();
    }
    uVar2 = func_0x037bb330(*(undefined4 *)(iVar1 + 8),param_3,0,*(undefined4 *)(iVar1 + 0xc),
                            *(undefined4 *)
                             (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *
                                                  )(iVar4 + 0x10) + 0x60) + 0x3c) + 0x10) + 0x60) +
                                                  0x68) + 0x10) + 0x60) + 0xac),unaff_r5,unaff_r4,
                            unaff_r5,unaff_r11,unaff_lr);
    if (-1 < (int)uVar2) {
      func_0x04cd4428(iVar1,uVar2);
    }
    return ~uVar2 >> 0x1f;
  }
  iVar1 = func_0x029540a4(0x5ce5,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar2 = func_0x028f9628(iVar1,param_1,param_2,param_3,param_4,0);
  return uVar2;
}

