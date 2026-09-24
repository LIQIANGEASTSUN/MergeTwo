
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02b4da18(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  uint in_fpscr;
  float fVar9;
  double dVar10;
  float fVar11;
  double dVar12;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar7 = (char *)(_UNK_02b4dd58 + 0x2b4da38);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02b4dd5c + 0x2b4da4c));
    func_0x01438628(*(undefined4 *)(_UNK_02b4dd60 + 0x2b4da58));
    func_0x01438628(*(undefined4 *)(_UNK_02b4dd64 + 0x2b4da64));
    func_0x01438628(*(undefined4 *)(_UNK_02b4dd68 + 0x2b4da70));
    func_0x01438628(*(undefined4 *)(_UNK_02b4dd6c + 0x2b4da7c));
    func_0x01438628(*(undefined4 *)(_UNK_02b4dd70 + 0x2b4da88));
    func_0x01438628(*(undefined4 *)(_UNK_02b4dd74 + 0x2b4da94));
    func_0x01438628(*(undefined4 *)(_UNK_02b4dd78 + 0x2b4daa0));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x2f05,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x2f05,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    func_0x024f56c0(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a6c(&uStack_38,param_2,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x024f56d0(iVar5,uVar6,&uStack_38,uVar3,0,0);
    uVar6 = func_0x024f56f0(&uStack_38,0,0);
    return uVar6;
  }
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02b4dd7c + 0x2b4db04));
  func_0x024eeca8(iVar1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  puVar8 = (undefined4 *)(iVar1 + 8);
  *puVar8 = param_2;
  func_0x014385cc(puVar8,param_2);
  iVar5 = FUN_02b4c698(param_1,0);
  if (iVar5 == 0) {
    return 0;
  }
  if (*(int *)(**(int **)(_UNK_02b4dd80 + 0x2b4db54) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_02b4dd84 + 0x2b4db70));
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  iVar5 = *(int *)(iVar5 + 0x1c);
  uVar6 = func_0x014388d4(**(undefined4 **)(_UNK_02b4dd88 + 0x2b4db90));
  func_0x03a062d0(uVar6,iVar1,**(undefined4 **)(_UNK_02b4dd8c + 0x2b4dbb0),0);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x024f0618(iVar5,uVar6,**(undefined4 **)(_UNK_02b4dd90 + 0x2b4dbd4));
  if (iVar1 == 0) {
    return 0;
  }
  uVar6 = *puVar8;
  if (*(int *)(**(int **)(_UNK_02b4dd94 + 0x2b4dbf4) + 0x74) == 0) {
    func_0x014387a4();
  }
  uVar6 = func_0x02af4e18(uVar6,0);
  fVar9 = (float)VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x16) & 3);
  fVar11 = (float)VectorSignedToFloat(*(undefined4 *)(iVar1 + 0xc),(byte)(in_fpscr >> 0x16) & 3);
  pcVar7 = (char *)(_UNK_02b4dd98 + 0x2b4dc30);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02b4dd9c + 0x2b4dc44));
    *pcVar7 = '\x01';
  }
  piVar4 = *(int **)(_UNK_02b4dda0 + 0x2b4dc5c);
  if (*(int *)(*piVar4 + 0x74) == 0) {
    func_0x014387a4();
  }
  dVar10 = (double)(fVar9 / fVar11);
  dVar12 = (double)func_0x0152f3a8(SUB84(dVar10,0),(int)((ulonglong)dVar10 >> 0x20),&uStack_30);
  if (0.0 <= fVar9 / fVar11) {
    if (dVar12 != 0.5) {
      dVar10 = (double)func_0x024f0e5c(SUB84(dVar10 + 0.5,0),
                                       (int)((ulonglong)(dVar10 + 0.5) >> 0x20));
      goto LAB_02b4dd08;
    }
    dVar10 = 1.0;
  }
  else {
    if (dVar12 != -0.5) {
      dVar10 = (double)func_0x0152f308(SUB84(dVar10 + -0.5,0),
                                       (int)((ulonglong)(dVar10 + -0.5) >> 0x20));
      goto LAB_02b4dd08;
    }
    dVar10 = -1.0;
  }
  uVar2 = func_0x014e6174(uStack_30,uStack_2c);
  dVar10 = (double)CONCAT44(uStack_2c,uStack_30) + dVar10;
  if ((uVar2 & 1) == 0) {
    dVar10 = (double)CONCAT44(uStack_2c,uStack_30);
  }
LAB_02b4dd08:
  uVar6 = (undefined4)(longlong)dVar10;
  if (dVar10 == _UNK_02b4dd50) {
    uVar6 = 0x80000000;
  }
  if (*(int *)(*piVar4 + 0x74) == 0) {
    func_0x014387a4();
  }
  uVar6 = (*(code *)&SUB_051608f4)(1,uVar6,0);
  return uVar6;
}

