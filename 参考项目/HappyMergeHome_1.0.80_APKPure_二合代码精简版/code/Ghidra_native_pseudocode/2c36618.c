
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c46618(int param_1)

{
  undefined4 *puVar1;
  float *pfVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  float fVar12;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  
  pcVar3 = (char *)(_UNK_02c46a08 + 0x2c46638);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c46a0c + 0x2c4664c));
    func_0x01438628(*(undefined4 *)(_UNK_02c46a10 + 0x2c46658));
    func_0x01438628(*(undefined4 *)(_UNK_02c46a14 + 0x2c46664));
    func_0x01438628(*(undefined4 *)(_UNK_02c46a18 + 0x2c46670));
    *pcVar3 = '\x01';
  }
  iVar5 = _UNK_02c46a20;
  if (*(int *)(param_1 + 8) == 1) {
    iVar11 = *(int *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (*(char *)(iVar5 + 0x2c466f0) == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c46a24 + 0x2c46704));
      *(char *)(iVar5 + 0x2c466f0) = '\x01';
    }
    pfVar2 = *(float **)(**(int **)(_UNK_02c46a28 + 0x2c4671c) + 0x5c);
    fVar12 = pfVar2[1];
    fStack_54 = *pfVar2;
    fStack_50 = pfVar2[2];
    if (iVar11 == 0) {
      func_0x014388e4();
    }
    iVar5 = *(int *)(iVar11 + 0x50);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    if (1 < *(int *)(iVar5 + 0xc)) {
      iVar5 = *(int *)(iVar11 + 0x50);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      puVar1 = *(undefined4 **)(_UNK_02c46a2c + 0x2c4677c);
      iVar5 = func_0x0152983c(iVar5,0,*puVar1);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = *(int *)(iVar5 + 0xc);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = func_0x024eecb8(iVar5,0);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      func_0x024ef228(&fStack_4c,iVar5,0);
      fStack_50 = fStack_44;
      fVar12 = fStack_48;
      fStack_54 = fStack_4c;
      iVar5 = *(int *)(iVar11 + 0x50);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = func_0x0152983c(iVar5,1,*puVar1);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = *(int *)(iVar5 + 0xc);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = func_0x024eecb8(iVar5,0);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      func_0x024ef228(&fStack_4c,iVar5,0);
      fStack_50 = fStack_50 - fStack_44;
      fVar12 = fVar12 - fStack_48;
      fStack_54 = fStack_54 - fStack_4c;
    }
    iVar5 = 0;
    puVar1 = *(undefined4 **)(_UNK_02c46a30 + 0x2c46880);
    while( true ) {
      iVar6 = *(int *)(iVar11 + 0x50);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar6 + 0xc) <= iVar5) break;
      iVar6 = *(int *)(iVar11 + 0x50);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = func_0x0152983c(iVar6,iVar5,*puVar1);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = *(int *)(iVar6 + 0xc);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      FUN_02c230dc(iVar6,**(undefined4 **)(_UNK_02c46a34 + 0x2c468ec),0,0);
      iVar6 = *(int *)(iVar11 + 0x50);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = func_0x0152983c(iVar6,iVar5,*puVar1);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = *(int *)(iVar6 + 0xc);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = FUN_02c19590(iVar6,0);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      func_0x014e94f8(iVar6,0,0);
      iVar6 = *(int *)(iVar11 + 0x50);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = func_0x0152983c(iVar6,iVar5,*puVar1);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = *(int *)(iVar6 + 0xc);
      fVar7 = fStack_50;
      fVar9 = fStack_54;
      fVar10 = fVar12;
      if (iVar5 == 0) {
        fVar10 = -fVar12;
        fVar9 = -fStack_54;
        fVar7 = -fStack_50;
      }
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      FUN_02c23454(iVar6,fVar9,fVar10,fVar7,0);
      iVar5 = iVar5 + 1;
    }
    uVar8 = 0;
    *(undefined4 *)(iVar11 + 0x58) = 0;
    func_0x014385cc((undefined4 *)(iVar11 + 0x58),0);
  }
  else {
    uVar8 = 0;
    if (*(int *)(param_1 + 8) == 0) {
      puVar1 = *(undefined4 **)(_UNK_02c46a1c + 0x2c466a0);
      uVar4 = *(undefined4 *)(param_1 + 0x10);
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      uVar8 = func_0x014388d4(*puVar1);
      func_0x024ef218(uVar8,uVar4,0);
      *(undefined4 *)(param_1 + 0xc) = uVar8;
      func_0x014385cc((undefined4 *)(param_1 + 0xc),uVar8);
      uVar8 = 1;
      *(undefined4 *)(param_1 + 8) = 1;
    }
  }
  return uVar8;
}

