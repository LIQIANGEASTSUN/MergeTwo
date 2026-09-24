
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02be9294(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint in_fpscr;
  float fVar12;
  float fVar13;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  longlong lStack_30;
  int iStack_28;
  
  pcVar7 = (char *)(_UNK_02be9aec + 0x2be92ac);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02be9af0 + 0x2be92c0));
    func_0x01438628(*(undefined4 *)(_UNK_02be9af4 + 0x2be92cc));
    func_0x01438628(*(undefined4 *)(_UNK_02be9af8 + 0x2be92d8));
    func_0x01438628(*(undefined4 *)(_UNK_02be9afc + 0x2be92e4));
    func_0x01438628(*(undefined4 *)(_UNK_02be9b00 + 0x2be92f0));
    func_0x01438628(*(undefined4 *)(_UNK_02be9b04 + 0x2be92fc));
    func_0x01438628(*(undefined4 *)(_UNK_02be9b08 + 0x2be9308));
    func_0x01438628(*(undefined4 *)(_UNK_02be9b0c + 0x2be9314));
    func_0x01438628(*(undefined4 *)(_UNK_02be9b10 + 0x2be9320));
    func_0x01438628(*(undefined4 *)(_UNK_02be9b14 + 0x2be932c));
    func_0x01438628(*(undefined4 *)(_UNK_02be9b18 + 0x2be9338));
    func_0x01438628(*(undefined4 *)(_UNK_02be9b1c + 0x2be9344));
    func_0x01438628(*(undefined4 *)(_UNK_02be9b20 + 0x2be9350));
    func_0x01438628(*(undefined4 *)(_UNK_02be9b24 + 0x2be935c));
    func_0x01438628(*(undefined4 *)(_UNK_02be9b28 + 0x2be9368));
    func_0x01438628(*(undefined4 *)(_UNK_02be9b2c + 0x2be9374));
    func_0x01438628(*(undefined4 *)(_UNK_02be9b30 + 0x2be9380));
    func_0x01438628(*(undefined4 *)(_UNK_02be9b34 + 0x2be938c));
    func_0x01438628(*(undefined4 *)(_UNK_02be9b38 + 0x2be9398));
    func_0x01438628(*(undefined4 *)(_UNK_02be9b3c + 0x2be93a4));
    func_0x01438628(*(undefined4 *)(_UNK_02be9b40 + 0x2be93b0));
    func_0x01438628(*(undefined4 *)(_UNK_02be9b44 + 0x2be93bc));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5d41,0);
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0xe8))(param_1,*(undefined4 *)(*param_1 + 0xec));
    if (*(int *)(**(int **)(_UNK_02be9b48 + 0x2be942c) + 0x74) == 0) {
      func_0x014387a4();
    }
    puVar9 = *(undefined4 **)(_UNK_02be9b4c + 0x2be9448);
    iVar1 = func_0x014e9518(*puVar9);
    iVar6 = param_1[4];
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_02bd0e74(iVar1,iVar6,0);
    uVar8 = *puVar9;
    param_1[0x12] = iVar1;
    iVar1 = func_0x014e9518(uVar8);
    iVar6 = param_1[4];
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_02bd0fbc(iVar1,iVar6,0);
    param_1[0x13] = iVar1;
    iVar1 = func_0x024eecb8(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x024f1164(&iStack_40,iVar1,0);
    iStack_28 = iStack_38;
    param_1[8] = iStack_38;
    *(ulonglong *)(param_1 + 6) = CONCAT44(iStack_3c,iStack_40);
    iVar1 = func_0x024eecb8(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x024f0e6c(iVar1,**(undefined4 **)(_UNK_02be9b50 + 0x2be9520),0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    piVar2 = (int *)func_0x024f0e6c(iVar1,**(undefined4 **)(_UNK_02be9b54 + 0x2be9548),0);
    piVar3 = (int *)0x0;
    if ((piVar2 != (int *)0x0) &&
       (piVar3 = piVar2, *piVar2 != **(int **)(_UNK_02be9b58 + 0x2be9564))) {
      piVar3 = (int *)0x0;
    }
    param_1[5] = (int)piVar3;
    func_0x014385cc(param_1 + 5,piVar3);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    piVar2 = (int *)func_0x024f0e6c(iVar1,**(undefined4 **)(_UNK_02be9b5c + 0x2be95a4),0);
    piVar3 = (int *)0x0;
    if (piVar2 == (int *)0x0) {
      param_1[9] = 0;
    }
    else {
      iVar6 = **(int **)(_UNK_02be9b60 + 0x2be95c4);
      piVar5 = (int *)0x0;
      if (*piVar2 == iVar6) {
        piVar5 = piVar2;
      }
      param_1[9] = (int)piVar5;
      if (*piVar2 == iVar6) {
        piVar3 = piVar2;
      }
    }
    func_0x014385cc(param_1 + 9,piVar3);
    if (iVar1 == 0) {
      func_0x014388e4();
      iVar6 = func_0x024f0e6c(0,**(undefined4 **)(_UNK_02be9b64 + 0x2be9644),0);
      param_1[10] = iVar6;
      func_0x014385cc();
      func_0x014388e4();
    }
    else {
      iVar6 = func_0x024f0e6c(iVar1,**(undefined4 **)(_UNK_02be9b68 + 0x2be9614),0);
      param_1[10] = iVar6;
      func_0x014385cc();
    }
    iVar1 = func_0x024f0e6c(iVar1,**(undefined4 **)(_UNK_02be9b6c + 0x2be9670),0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x014e94d8(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x03639cdc(iVar1,**(undefined4 **)(_UNK_02be9b70 + 0x2be96b0));
    param_1[0x15] = iVar1;
    func_0x014385cc(param_1 + 0x15,iVar1);
    iVar1 = param_1[5];
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x024efe08(&iStack_50,iVar1,0);
    param_1[0xb] = iStack_50;
    param_1[0xc] = iStack_4c;
    param_1[0xd] = iStack_48;
    param_1[0xe] = iStack_44;
    fVar12 = (float)VectorSignedToFloat(param_1[0x12],(byte)(in_fpscr >> 0x16) & 3);
    fVar13 = (float)VectorSignedToFloat(param_1[0x13],(byte)(in_fpscr >> 0x16) & 3);
    iStack_40 = iStack_50;
    iStack_3c = iStack_4c;
    iStack_38 = iStack_48;
    iStack_34 = iStack_44;
    param_1[0xf] = (int)((float)param_1[0xd] / fVar12);
    param_1[0x10] = (int)((float)param_1[0xe] / fVar13);
    func_0x02be9ba8(param_1,param_1[0x13] * param_1[0x12]);
    if (*(int *)(**(int **)(_UNK_02be9b74 + 0x2be9748) + 0x74) == 0) {
      func_0x014387a4();
    }
    puVar9 = *(undefined4 **)(_UNK_02be9b78 + 0x2be9764);
    iVar1 = func_0x014e9518(*puVar9);
    piVar3 = *(int **)(_UNK_02be9b7c + 0x2be9778);
    iVar6 = *piVar3;
    if (*(int *)(iVar6 + 0x74) == 0) {
      func_0x014387a4();
      iVar6 = *piVar3;
    }
    puVar10 = *(undefined4 **)(_UNK_02be9b80 + 0x2be979c);
    uVar4 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0x38);
    uVar8 = func_0x014388d4(*puVar10);
    func_0x038ec9e8(uVar8,param_1,**(undefined4 **)(_UNK_02be9b84 + 0x2be97bc),0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x0298fdb0(iVar1,uVar4,uVar8,0);
    iVar1 = func_0x014e9518(*puVar9);
    uVar4 = *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x34);
    uVar8 = func_0x014388d4(*puVar10);
    func_0x038ec9e8(uVar8,param_1,**(undefined4 **)(_UNK_02be9b88 + 0x2be981c),0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x0298fdb0(iVar1,uVar4,uVar8,0);
    iVar1 = func_0x014e9518(*puVar9);
    uVar4 = *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8);
    uVar8 = func_0x014388d4(*puVar10);
    func_0x038ec9e8(uVar8,param_1,**(undefined4 **)(_UNK_02be9b8c + 0x2be987c),0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x0298fdb0(iVar1,uVar4,uVar8,0);
    iVar1 = func_0x014e9518(*puVar9);
    piVar2 = *(int **)(_UNK_02be9b90 + 0x2be98bc);
    iVar6 = *piVar2;
    if (*(int *)(iVar6 + 0x74) == 0) {
      func_0x014387a4();
      iVar6 = *piVar2;
    }
    uVar4 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0x388);
    uVar8 = func_0x014388d4(*puVar10);
    func_0x038ec9e8(uVar8,param_1,**(undefined4 **)(_UNK_02be9b94 + 0x2be98f8),0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x0298fdb0(iVar1,uVar4,uVar8,0);
    iVar1 = func_0x014e9518(*puVar9);
    uVar4 = *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x2c);
    uVar8 = func_0x014388d4(*puVar10);
    puVar11 = *(undefined4 **)(_UNK_02be9b98 + 0x2be9958);
    func_0x038ec9e8(uVar8,param_1,*puVar11,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x0298fdb0(iVar1,uVar4,uVar8,0);
    iVar1 = func_0x014e9518(*puVar9);
    uVar4 = *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x40);
    uVar8 = func_0x014388d4(*puVar10);
    func_0x038ec9e8(uVar8,param_1,*puVar11,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x0298fdb0(iVar1,uVar4,uVar8,0);
    iVar1 = func_0x014e9518(*puVar9);
    uVar4 = *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x3c);
    uVar8 = func_0x014388d4(*puVar10);
    func_0x038ec9e8(uVar8,param_1,**(undefined4 **)(_UNK_02be9b9c + 0x2be9a08),0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x0298fdb0(iVar1,uVar4,uVar8,0);
    iVar1 = func_0x014e9518(*puVar9);
    uVar4 = *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x1c);
    uVar8 = func_0x014388d4(*puVar10);
    func_0x038ec9e8(uVar8,param_1,**(undefined4 **)(_UNK_02be9ba0 + 0x2be9a6c),0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x0298fdb0(iVar1,uVar4,uVar8,0);
    func_0x024ef2a8(param_1,**(undefined4 **)(_UNK_02be9ba4 + 0x2be9aac),0x40800000,0x3f800000,0);
    if (param_1[0x15] != 0) {
      func_0x02b9f57c(param_1[0x15],0);
    }
    func_0x02be9e00(param_1);
    func_0x02bea100(param_1);
    func_0x02beaae0(param_1);
    return;
  }
  iVar1 = func_0x029540a4(0x5d41,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  lStack_30 = (ulonglong)*(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4) << 0x20;
  func_0x024f56c0(&iStack_48,0,0);
  iStack_28 = iStack_40;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01523a6c(&lStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01523a6c(&lStack_30,param_1,0);
  iVar6 = *(int *)(iVar1 + 8);
  uVar8 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  uVar4 = 2;
  if (iVar1 == 0) {
    uVar4 = 1;
  }
  iStack_50 = 0;
  iStack_4c = 0;
  func_0x024f56d0(iVar6,uVar8,&lStack_30,uVar4);
  return;
}

