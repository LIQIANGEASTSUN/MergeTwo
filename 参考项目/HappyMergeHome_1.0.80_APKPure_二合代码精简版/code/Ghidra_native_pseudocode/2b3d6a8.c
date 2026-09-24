
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b4d6a8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  
  pcVar5 = (char *)(_UNK_02b4d9c8 + 0x2b4d6d0);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02b4d9cc + 0x2b4d6e8));
    func_0x01438628(*(undefined4 *)(_UNK_02b4d9d0 + 0x2b4d6f4));
    func_0x01438628(*(undefined4 *)(_UNK_02b4d9d4 + 0x2b4d700));
    func_0x01438628(*(undefined4 *)(_UNK_02b4d9d8 + 0x2b4d70c));
    func_0x01438628(*(undefined4 *)(_UNK_02b4d9dc + 0x2b4d718));
    func_0x01438628(*(undefined4 *)(_UNK_02b4d9e0 + 0x2b4d724));
    func_0x01438628(*(undefined4 *)(_UNK_02b4d9e4 + 0x2b4d730));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x2f01,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x2f01,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028baa98(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,0);
    return;
  }
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02b4d9e8 + 0x2b4d7a4));
  func_0x024eeca8(iVar1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  *(undefined4 *)(iVar1 + 8) = param_2;
  iVar2 = FUN_02b4c698(param_1,0);
  if (iVar2 == 0) {
    return;
  }
  if (*(int *)(**(int **)(_UNK_02b4d9ec + 0x2b4d7e4) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02b4d9f0 + 0x2b4d800));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = *(int *)(iVar2 + 0x1c);
  uVar3 = func_0x014388d4(**(undefined4 **)(_UNK_02b4d9f4 + 0x2b4d820));
  func_0x03a062d0(uVar3,iVar1,**(undefined4 **)(_UNK_02b4d9f8 + 0x2b4d840),0);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x024f0618(iVar2,uVar3,**(undefined4 **)(_UNK_02b4d9fc + 0x2b4d864));
  if (iVar1 == 0) {
    return;
  }
  fVar7 = (float)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
  fVar9 = (float)VectorSignedToFloat(*(undefined4 *)(iVar1 + 0xc),(byte)(in_fpscr >> 0x16) & 3);
  pcVar5 = (char *)(_UNK_02b4da00 + 0x2b4d890);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02b4da04 + 0x2b4d8a4));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(_UNK_02b4da08 + 0x2b4d8bc);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    func_0x014387a4();
  }
  dVar8 = (double)(fVar7 / fVar9);
  dVar10 = (double)func_0x0152f3a8(SUB84(dVar8,0),(int)((ulonglong)dVar8 >> 0x20),&dStack_40);
  if (0.0 <= fVar7 / fVar9) {
    if (dVar10 != 0.5) {
      dVar8 = (double)func_0x024f0e5c(SUB84(dVar8 + 0.5,0),(int)((ulonglong)(dVar8 + 0.5) >> 0x20));
      goto LAB_02b4d958;
    }
    dVar8 = 1.0;
  }
  else {
    if (dVar10 != -0.5) {
      dVar8 = (double)func_0x0152f308(SUB84(dVar8 + -0.5,0),(int)((ulonglong)(dVar8 + -0.5) >> 0x20)
                                     );
      goto LAB_02b4d958;
    }
    dVar8 = -1.0;
  }
  uVar4 = func_0x014e6174(SUB84(dStack_40,0),(int)((ulonglong)dStack_40 >> 0x20));
  dVar8 = dStack_40 + dVar8;
  if ((uVar4 & 1) == 0) {
    dVar8 = dStack_40;
  }
LAB_02b4d958:
  uVar3 = (undefined4)(longlong)dVar8;
  if (dVar8 == _UNK_02b4d9c0) {
    uVar3 = 0x80000000;
  }
  if (*(int *)(*piVar6 + 0x74) == 0) {
    func_0x014387a4();
  }
  uVar3 = func_0x0152ae0c(1,uVar3,0);
  FUN_02b4d568(param_1,uVar3,param_4,param_5,param_6);
  return;
}

