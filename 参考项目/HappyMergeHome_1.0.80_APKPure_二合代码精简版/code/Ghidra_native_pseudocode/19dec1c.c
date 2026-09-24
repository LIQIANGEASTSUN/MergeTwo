
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_019eec1c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
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
  
  pcVar6 = (char *)(_UNK_019eee24 + 0x19eec38);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_019eee28 + 0x19eec4c));
    func_0x01438628(*(undefined4 *)(_UNK_019eee2c + 0x19eec58));
    func_0x01438628(*(undefined4 *)(_UNK_019eee30 + 0x19eec64));
    func_0x01438628(*(undefined4 *)(_UNK_019eee34 + 0x19eec70));
    func_0x01438628(*(undefined4 *)(_UNK_019eee38 + 0x19eec7c));
    func_0x01438628(*(undefined4 *)(_UNK_019eee3c + 0x19eec88));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x3739,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_019eee40 + 0x19eece8));
    func_0x024eeca8(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar1 + 8) = param_2;
    iVar5 = FUN_019e8374(param_1,param_2);
    if (*(int *)(**(int **)(_UNK_019eee44 + 0x19eed24) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_019eee48 + 0x19eed40));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = *(int *)(iVar2 + 0x18);
    uVar7 = func_0x014388d4(**(undefined4 **)(_UNK_019eee4c + 0x19eed60));
    func_0x024f0614(uVar7,iVar1,**(undefined4 **)(_UNK_019eee50 + 0x19eed80),0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x024f0618(iVar2,uVar7,**(undefined4 **)(_UNK_019eee54 + 0x19eeda4));
    fVar3 = _UNK_019eee20;
    if (iVar1 != 0) {
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      if ((*(char *)(iVar5 + 0xc) != '\0') && (0 < *(int *)(iVar1 + 0x18))) {
        fVar9 = (float)VectorSignedToFloat(*(int *)(iVar1 + 0x18),(byte)(in_fpscr >> 0x16) & 3);
        fVar8 = (float)VectorSignedToFloat(*(undefined4 *)(iVar5 + 8),(byte)(in_fpscr >> 0x16) & 3);
        fVar8 = fVar8 / fVar9;
        if ((0.0 <= fVar8) && (fVar3 = fVar8, 1.0 < fVar8)) {
          fVar3 = 1.0;
        }
      }
    }
    return fVar3;
  }
  iVar1 = func_0x029540a4(0x3739,0);
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
  iVar5 = *(int *)(iVar1 + 8);
  uVar7 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  uVar4 = 3;
  if (iVar1 == 0) {
    uVar4 = 2;
  }
  func_0x024f56d0(iVar5,uVar7,&uStack_38,uVar4,0,0);
  fVar3 = (float)func_0x024f5720(&uStack_38,0,0);
  return fVar3;
}

