
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c315f0(int param_1,float param_2,float param_3,float param_4)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  int *piVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  
  pcVar7 = (char *)(_UNK_02c31b34 + 0x2c31618);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c31b38 + 0x2c31630));
    func_0x01438628(*(undefined4 *)(_UNK_02c31b3c + 0x2c3163c));
    func_0x01438628(*(undefined4 *)(_UNK_02c31b40 + 0x2c31648));
    func_0x01438628(*(undefined4 *)(_UNK_02c31b44 + 0x2c31654));
    func_0x01438628(*(undefined4 *)(_UNK_02c31b48 + 0x2c31660));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5e78,0);
  if (iVar1 == 0) {
    iVar1 = FUN_02c195e4(param_1);
    if (iVar1 != -1) {
      iVar1 = func_0x024eecb8(param_1,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x024f0474(&fStack_6c,iVar1,0);
      pcVar7 = (char *)(_UNK_02c31b4c + 0x2c31730);
      if (*pcVar7 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_02c31b50 + 0x2c31744));
        *pcVar7 = '\x01';
      }
      param_4 = param_4 + fStack_64;
      param_3 = param_3 + fStack_68;
      param_2 = param_2 + fStack_6c;
      if (*(int *)(**(int **)(_UNK_02c31b54 + 0x2c31764) + 0x74) == 0) {
        func_0x014387a4();
      }
      fVar9 = SQRT(param_3 * param_3 + param_2 * param_2 + param_4 * param_4);
      if (fVar9 <= _UNK_02c31b2c) {
        pcVar7 = (char *)(_UNK_02c31b58 + 0x2c317b0);
        if (*pcVar7 == '\0') {
          func_0x01438628(*(undefined4 *)(_UNK_02c31b5c + 0x2c317c4));
          *pcVar7 = '\x01';
        }
        pfVar2 = *(float **)(**(int **)(_UNK_02c31b60 + 0x2c317d8) + 0x5c);
        param_2 = *pfVar2;
        param_3 = pfVar2[1];
        param_4 = pfVar2[2];
      }
      else {
        param_4 = param_4 / fVar9;
        param_3 = param_3 / fVar9;
        param_2 = param_2 / fVar9;
      }
      iVar1 = *(int *)(param_1 + 0x44);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x014e94d8(iVar1,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x014e94e8(iVar1,1,0);
      iVar1 = *(int *)(param_1 + 0x44);
      pcVar7 = (char *)(_UNK_02c31b64 + 0x2c31838);
      if (*pcVar7 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_02c31b68 + 0x2c3184c));
        *pcVar7 = '\x01';
      }
      piVar8 = *(int **)(_UNK_02c31b6c + 0x2c31864);
      iVar3 = *(int *)(*piVar8 + 0x5c);
      fVar10 = *(float *)(iVar3 + 0x10);
      fVar11 = *(float *)(iVar3 + 0x14);
      fVar9 = *(float *)(iVar3 + 0xc);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x024ef328(iVar1,fVar9 * 0.5,fVar10 * 0.5,fVar11 * 0.5,0);
      if (*(int *)(**(int **)(_UNK_02c31b70 + 0x2c318bc) + 0x74) == 0) {
        func_0x014387a4();
      }
      uVar4 = func_0x0333764c(0);
      iVar1 = *(int *)(param_1 + 0x44);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar5 = func_0x024eecb8(iVar1,0);
      if (*pcVar7 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_02c31b74 + 0x2c31918));
        *pcVar7 = '\x01';
      }
      iVar1 = *(int *)(*piVar8 + 0x5c);
      uVar5 = func_0x03343850(uVar5,*(float *)(iVar1 + 0xc) * _UNK_02c31b30,
                              *(float *)(iVar1 + 0x10) * _UNK_02c31b30,
                              *(float *)(iVar1 + 0x14) * _UNK_02c31b30,
                              *(undefined4 *)(param_1 + 0x16c),0);
      func_0x0334d380(uVar4,0,uVar5,0);
      iVar1 = *(int *)(param_1 + 0x44);
      uVar5 = *(undefined4 *)(param_1 + 0x16c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar6 = func_0x024eecb8(iVar1,0);
      pcVar7 = (char *)(_UNK_02c31b78 + 0x2c319c0);
      if (*pcVar7 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_02c31b7c + 0x2c319d4));
        *pcVar7 = '\x01';
      }
      iVar1 = *(int *)(**(int **)(_UNK_02c31b80 + 0x2c319e8) + 0x5c);
      uVar6 = func_0x03343850(uVar6,*(undefined4 *)(iVar1 + 0xc),*(undefined4 *)(iVar1 + 0x10),
                              *(undefined4 *)(iVar1 + 0x14),*(undefined4 *)(param_1 + 0x16c),0);
      func_0x0334d380(uVar4,uVar5,uVar6,0);
      uVar5 = func_0x024eecb8(param_1,0);
      uVar5 = func_0x03342888(uVar5,fStack_6c + param_2 * 15.0,fStack_68 + param_3 * 15.0,
                              fStack_64 + param_4 * 15.0,*(undefined4 *)(param_1 + 0x16c),0,0);
      func_0x0334d380(uVar4,0,uVar5,0);
      uVar6 = *(undefined4 *)(param_1 + 0x16c);
      uVar5 = func_0x024eecb8(param_1,0);
      uVar5 = func_0x03342888(uVar5,fStack_6c,fStack_68,fStack_64,*(undefined4 *)(param_1 + 0x16c),0
                              ,0);
      func_0x0334d380(uVar4,uVar6,uVar5,0);
      uVar6 = *(undefined4 *)(param_1 + 0x16c);
      uVar5 = func_0x03633ce4(*(undefined4 *)(param_1 + 0x44),0,
                              **(undefined4 **)(_UNK_02c31b84 + 0x2c31aa8));
      uVar5 = func_0x0157ce88(uVar5,0,*(undefined4 *)(param_1 + 0x16c),0);
      func_0x0334d380(uVar4,uVar6,uVar5,0);
      uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_02c31b88 + 0x2c31ae0));
      func_0x033341c0(uVar5,param_1,**(undefined4 **)(_UNK_02c31b8c + 0x2c31afc),0);
      func_0x03734ec8(uVar4,uVar5,**(undefined4 **)(_UNK_02c31b90 + 0x2c31b14));
    }
  }
  else {
    iVar1 = func_0x029540a4(0x5e78,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02895e70(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}

