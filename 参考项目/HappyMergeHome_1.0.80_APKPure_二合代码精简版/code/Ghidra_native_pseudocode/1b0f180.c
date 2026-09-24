
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b1f180(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  char *pcVar5;
  int *piVar6;
  uint in_fpscr;
  float fVar7;
  double dVar8;
  float fVar9;
  double dVar10;
  double dStack_40;
  
  pcVar5 = (char *)(_UNK_01b1f4a0 + 0x1b1f1a8);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01b1f4a4 + 0x1b1f1c0));
    func_0x01438628(*(undefined4 *)(_UNK_01b1f4a8 + 0x1b1f1cc));
    func_0x01438628(*(undefined4 *)(_UNK_01b1f4ac + 0x1b1f1d8));
    func_0x01438628(*(undefined4 *)(_UNK_01b1f4b0 + 0x1b1f1e4));
    func_0x01438628(*(undefined4 *)(_UNK_01b1f4b4 + 0x1b1f1f0));
    func_0x01438628(*(undefined4 *)(_UNK_01b1f4b8 + 0x1b1f1fc));
    func_0x01438628(*(undefined4 *)(_UNK_01b1f4bc + 0x1b1f208));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x3840,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x3840,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028baa98(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,0);
    return;
  }
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01b1f4c0 + 0x1b1f27c));
  func_0x024eeca8(iVar1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  *(undefined4 *)(iVar1 + 8) = param_2;
  iVar2 = FUN_01b1e048(param_1,0);
  if (iVar2 == 0) {
    return;
  }
  if (*(int *)(**(int **)(_UNK_01b1f4c4 + 0x1b1f2bc) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_01b1f4c8 + 0x1b1f2d8));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = *(int *)(iVar2 + 0x1c);
  uVar3 = func_0x014388d4(**(undefined4 **)(_UNK_01b1f4cc + 0x1b1f2f8));
  func_0x03a062d0(uVar3,iVar1,**(undefined4 **)(_UNK_01b1f4d0 + 0x1b1f318),0);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x024f0618(iVar2,uVar3,**(undefined4 **)(_UNK_01b1f4d4 + 0x1b1f33c));
  if (iVar1 == 0) {
    return;
  }
  fVar7 = (float)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
  fVar9 = (float)VectorSignedToFloat(*(undefined4 *)(iVar1 + 0xc),(byte)(in_fpscr >> 0x16) & 3);
  pcVar5 = (char *)(_UNK_01b1f4d8 + 0x1b1f368);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01b1f4dc + 0x1b1f37c));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(_UNK_01b1f4e0 + 0x1b1f394);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    func_0x014387a4();
  }
  dVar8 = (double)(fVar7 / fVar9);
  dVar10 = (double)func_0x0152f3a8(SUB84(dVar8,0),(int)((ulonglong)dVar8 >> 0x20),&dStack_40);
  if (0.0 <= fVar7 / fVar9) {
    if (dVar10 != 0.5) {
      dVar8 = (double)func_0x024f0e5c(SUB84(dVar8 + 0.5,0),(int)((ulonglong)(dVar8 + 0.5) >> 0x20));
      goto LAB_01b1f430;
    }
    dVar8 = 1.0;
  }
  else {
    if (dVar10 != -0.5) {
      dVar8 = (double)func_0x0152f308(SUB84(dVar8 + -0.5,0),(int)((ulonglong)(dVar8 + -0.5) >> 0x20)
                                     );
      goto LAB_01b1f430;
    }
    dVar8 = -1.0;
  }
  uVar4 = func_0x014e6174(SUB84(dStack_40,0),(int)((ulonglong)dStack_40 >> 0x20));
  dVar8 = dStack_40 + dVar8;
  if ((uVar4 & 1) == 0) {
    dVar8 = dStack_40;
  }
LAB_01b1f430:
  uVar3 = (undefined4)(longlong)dVar8;
  if (dVar8 == _UNK_01b1f498) {
    uVar3 = 0x80000000;
  }
  if (*(int *)(*piVar6 + 0x74) == 0) {
    func_0x014387a4();
  }
  uVar3 = func_0x0152ae0c(1,uVar3,0);
  FUN_01b1f044(param_1,uVar3,param_4,param_5,param_6);
  return;
}

