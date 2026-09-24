
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_02ebdb34(undefined4 param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int iVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  
  pcVar5 = (char *)(_UNK_02ebde44 + 0x2ebdb50);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02ebde48 + 0x2ebdb64));
    func_0x01438628(*(undefined4 *)(_UNK_02ebde4c + 0x2ebdb70));
    func_0x01438628(*(undefined4 *)(_UNK_02ebde50 + 0x2ebdb7c));
    func_0x01438628(*(undefined4 *)(_UNK_02ebde54 + 0x2ebdb88));
    func_0x01438628(*(undefined4 *)(_UNK_02ebde58 + 0x2ebdb94));
    func_0x01438628(*(undefined4 *)(_UNK_02ebde5c + 0x2ebdba0));
    func_0x01438628(*(undefined4 *)(_UNK_02ebde60 + 0x2ebdbac));
    *pcVar5 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  iVar1 = func_0x02953fd4(0x47df,0);
  if (iVar1 == 0) {
    iVar1 = FUN_02ebce1c(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x04cfe6f4(&uStack_50,iVar1,**(undefined4 **)(_UNK_02ebde64 + 0x2ebdc34));
    iVar7 = 0;
    uStack_40 = uStack_50;
    uStack_3c = uStack_4c;
    uStack_38 = uStack_48;
    iStack_34 = iStack_44;
    puVar6 = *(undefined4 **)(_UNK_02ebde68 + 0x2ebdc54);
    while (iVar3 = func_0x04878f14(&uStack_40,*puVar6), iVar4 = iStack_34, iVar3 != 0) {
      iVar3 = FUN_02ebc9c0(param_1);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0xc);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0xc);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar4 + 0xc) <= iVar3) {
        iVar7 = iVar7 + 1;
      }
    }
    func_0x04878f10(&uStack_40,**(undefined4 **)(_UNK_02ebde70 + 0x2ebdcbc));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (iVar7 < *(int *)(iVar1 + 0xc)) {
      if (iVar7 < 1) {
        iVar4 = 0;
      }
      else {
        iVar4 = func_0x04cfd760(iVar1,iVar7 + -1,**(undefined4 **)(_UNK_02ebde78 + 0x2ebdcf4));
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = *(int *)(iVar4 + 0xc);
      }
      iVar3 = FUN_02ebc9c0(param_1);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0xc);
      fVar2 = (float)VectorSignedToFloat(iVar7,(byte)(in_fpscr >> 0x16) & 3);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0xc);
      iVar1 = func_0x04cfd760(iVar1,iVar7,**(undefined4 **)(_UNK_02ebde7c + 0x2ebdd68));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      fVar8 = (float)VectorSignedToFloat(iVar3 - iVar4,(byte)(in_fpscr >> 0x16) & 3);
      fVar9 = (float)VectorSignedToFloat(*(int *)(iVar1 + 0xc) - iVar4,(byte)(in_fpscr >> 0x16) & 3)
      ;
      fVar2 = fVar2 * 0.25 + (fVar8 / fVar9) * 0.25;
    }
    else {
      fVar2 = 1.0;
    }
  }
  else {
    iVar1 = func_0x029540a4(0x47df,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    fVar2 = (float)func_0x0286a2d4(iVar1,param_1,0);
  }
  return fVar2;
}

