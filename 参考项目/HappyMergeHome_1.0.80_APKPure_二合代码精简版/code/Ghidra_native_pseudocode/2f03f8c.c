
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_02f13f8c(undefined4 param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  uint in_fpscr;
  float fVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar6 = (char *)(_UNK_02f14270 + 0x2f13fa4);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f14274 + 0x2f13fb8));
    func_0x01438628(*(undefined4 *)(_UNK_02f14278 + 0x2f13fc4));
    func_0x01438628(*(undefined4 *)(_UNK_02f1427c + 0x2f13fd0));
    func_0x01438628(*(undefined4 *)(_UNK_02f14280 + 0x2f13fdc));
    func_0x01438628(*(undefined4 *)(_UNK_02f14284 + 0x2f13fe8));
    func_0x01438628(*(undefined4 *)(_UNK_02f14288 + 0x2f13ff4));
    func_0x01438628(*(undefined4 *)(_UNK_02f1428c + 0x2f14000));
    func_0x01438628(*(undefined4 *)(_UNK_02f14290 + 0x2f1400c));
    *pcVar6 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x6c45,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02f14294 + 0x2f14074) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02f14298 + 0x2f14090));
    iVar3 = FUN_02f0ab60(param_1);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar8 = *(undefined4 *)(iVar3 + 0x2c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x0205c48c(iVar1,uVar8,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar3 = *(int *)(iVar1 + 0xc);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    func_0x04cfe6f4(&uStack_48,iVar3,**(undefined4 **)(_UNK_02f1429c + 0x2f14104));
    iVar3 = 0;
    uStack_38 = uStack_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    iStack_2c = iStack_3c;
    puVar7 = *(undefined4 **)(_UNK_02f142a0 + 0x2f14124);
    puVar9 = *(undefined4 **)(_UNK_02f142a4 + 0x2f1412c);
    while (iVar4 = func_0x04878f14(&uStack_38,*puVar7), iVar5 = iStack_2c, iVar4 != 0) {
      iVar4 = FUN_02f0ab60(param_1);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar4 + 0x40);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      uVar8 = *(undefined4 *)(iVar5 + 8);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar5 = func_0x04cd2d7c(iVar4,uVar8,*puVar9);
      iVar3 = iVar3 + iVar5;
    }
    func_0x04878f10(&uStack_38,**(undefined4 **)(_UNK_02f142ac + 0x2f1419c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0xc);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    fVar2 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
    fVar10 = (float)VectorSignedToFloat(*(undefined4 *)(iVar1 + 0xc),(byte)(in_fpscr >> 0x16) & 3);
    fVar2 = fVar2 / fVar10;
  }
  else {
    iVar1 = func_0x029540a4(0x6c45,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    fVar2 = (float)func_0x0286a2d4(iVar1,param_1,0);
  }
  return fVar2;
}

