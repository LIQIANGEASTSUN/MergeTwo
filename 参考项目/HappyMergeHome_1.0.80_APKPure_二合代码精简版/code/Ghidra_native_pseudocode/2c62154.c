
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c72154(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 *puVar9;
  uint in_fpscr;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uStack_48;
  int iStack_44;
  
  pcVar3 = (char *)(_UNK_02c725a0 + 0x2c72178);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c725a4 + 0x2c7218c));
    func_0x01438628(*(undefined4 *)(_UNK_02c725a8 + 0x2c72198));
    func_0x01438628(*(undefined4 *)(_UNK_02c725ac + 0x2c721a4));
    func_0x01438628(*(undefined4 *)(_UNK_02c725b0 + 0x2c721b0));
    func_0x01438628(*(undefined4 *)(_UNK_02c725b4 + 0x2c721bc));
    func_0x01438628(*(undefined4 *)(_UNK_02c725b8 + 0x2c721c8));
    *pcVar3 = '\x01';
  }
  iStack_44 = 0;
  uStack_48 = 0;
  iVar1 = func_0x02953fd4(0x601e,0);
  if (iVar1 == 0) {
    piVar8 = *(int **)(_UNK_02c725bc + 0x2c72230);
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x014387a4();
    }
    puVar9 = *(undefined4 **)(_UNK_02c725c0 + 0x2c7224c);
    iVar1 = func_0x014e9518(*puVar9);
    uVar5 = *(undefined4 *)(param_1 + 0x8c);
    uVar6 = *(undefined4 *)(param_1 + 0x90);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar5 = FUN_02bd84dc(iVar1,uVar5,uVar6,0);
    iVar1 = func_0x014e9518(*puVar9);
    uVar6 = *(undefined4 *)(param_1 + 0x8c);
    uVar7 = *(undefined4 *)(param_1 + 0x90);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_02bd8354(iVar1,uVar6,uVar7,0);
    if (*(int *)(param_1 + 0xd4) == 2) {
      iVar1 = *(int *)(param_1 + 0x8c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x94);
      if (*(int *)(*piVar8 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x014e9518(*puVar9);
      uVar5 = *(undefined4 *)(param_1 + 0x8c);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar5 = FUN_02bd6714(iVar2,uVar5,0);
    }
    if (0 < param_2) {
      if (*(int *)(**(int **)(_UNK_02c725c4 + 0x2c72330) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x03b2c734(**(undefined4 **)(_UNK_02c725c8 + 0x2c7234c));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar6 = func_0x020ecfcc(iVar2,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(uint *)(iVar1 + 0xc) < 2) {
        func_0x014388e8();
      }
      fVar12 = (float)VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x16) & 3);
      fVar11 = (float)VectorSignedToFloat(*(undefined4 *)(iVar1 + 0x14),(byte)(in_fpscr >> 0x16) & 3
                                         );
      pcVar3 = (char *)(_UNK_02c725cc + 0x2c723a8);
      fVar13 = (float)VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x16) & 3);
      if (*pcVar3 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_02c725d0 + 0x2c723c8));
        *pcVar3 = '\x01';
      }
      piVar8 = *(int **)(_UNK_02c725d4 + 0x2c723e0);
      if (*(int *)(*piVar8 + 0x74) == 0) {
        func_0x014387a4();
      }
      fVar12 = (float)func_0x024f04b4((fVar12 / fVar11) * fVar13);
      fVar11 = _UNK_02c7259c;
      iVar1 = *(int *)(param_1 + 0x90);
      uVar10 = in_fpscr & 0xfffffff | (uint)(fVar12 == _UNK_02c7259c) << 0x1e;
      iVar2 = (int)fVar12;
      if (SUB41(uVar10 >> 0x1e,0)) {
        iVar2 = -0x80000000;
      }
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      fVar12 = (float)VectorSignedToFloat(iVar2,(byte)(uVar10 >> 0x16) & 3);
      fVar13 = (float)VectorSignedToFloat(*(int *)(iVar1 + 0x6c) * iVar2 + param_2,
                                          (byte)(uVar10 >> 0x16) & 3);
      if (*pcVar3 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_02c725d8 + 0x2c72454));
        *pcVar3 = '\x01';
      }
      if (*(int *)(*piVar8 + 0x74) == 0) {
        func_0x014387a4();
      }
      fVar12 = (float)func_0x024f04b4(fVar13 / fVar12);
      iVar2 = *(int *)(param_1 + 0x90);
      iVar1 = (int)fVar12;
      if (fVar12 == fVar11) {
        iVar1 = -0x80000000;
      }
      iStack_44 = iVar1;
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(param_1 + 0x70);
      uStack_48 = *(undefined4 *)(iVar2 + 0x6c);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x014e94d8(iVar4,0);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      if (iVar1 < 2) {
        func_0x014e94e8(iVar2,0,0);
        iVar1 = *(int *)(param_1 + 0x70);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x0202e208(iVar1,**(undefined4 **)(_UNK_02c725dc + 0x2c72584),0);
      }
      else {
        func_0x014e94e8(iVar2,1,0);
        iVar1 = *(int *)(param_1 + 0x70);
        uVar5 = func_0x01524ffc(&uStack_48,0);
        uVar6 = func_0x01524ffc(&iStack_44,0);
        uVar5 = func_0x024eee28(uVar5,**(undefined4 **)(_UNK_02c725e0 + 0x2c72528),uVar6,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x02032130(iVar1,uVar5,1,0);
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x601e,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x0286c2b8(iVar1,param_1,param_2,0);
  }
  return;
}

