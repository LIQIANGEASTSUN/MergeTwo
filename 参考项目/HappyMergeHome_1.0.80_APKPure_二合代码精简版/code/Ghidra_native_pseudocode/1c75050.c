
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01c85050(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
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
  
  pcVar6 = (char *)(_UNK_01c85390 + 0x1c85070);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01c85394 + 0x1c85084));
    func_0x01438628(*(undefined4 *)(_UNK_01c85398 + 0x1c85090));
    func_0x01438628(*(undefined4 *)(_UNK_01c8539c + 0x1c8509c));
    func_0x01438628(*(undefined4 *)(_UNK_01c853a0 + 0x1c850a8));
    func_0x01438628(*(undefined4 *)(_UNK_01c853a4 + 0x1c850b4));
    func_0x01438628(*(undefined4 *)(_UNK_01c853a8 + 0x1c850c0));
    func_0x01438628(*(undefined4 *)(_UNK_01c853ac + 0x1c850cc));
    func_0x01438628(*(undefined4 *)(_UNK_01c853b0 + 0x1c850d8));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x3c95,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x3c95,0);
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
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x024f56d0(iVar5,uVar8,&uStack_38,uVar3,0,0);
    uVar8 = func_0x024f56f0(&uStack_38,0,0);
    return uVar8;
  }
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01c853b4 + 0x1c8513c));
  func_0x01c88194(iVar1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  puVar7 = (undefined4 *)(iVar1 + 8);
  *puVar7 = param_2;
  func_0x014385cc(puVar7,param_2);
  iVar5 = FUN_01c81224(param_1);
  if (iVar5 == 0) {
    return 0;
  }
  if (*(int *)(**(int **)(_UNK_01c853b8 + 0x1c85188) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_01c853bc + 0x1c851a4));
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  iVar5 = *(int *)(iVar5 + 0x28);
  uVar8 = func_0x014388d4(**(undefined4 **)(_UNK_01c853c0 + 0x1c851c4));
  func_0x03a062d0(uVar8,iVar1,**(undefined4 **)(_UNK_01c853c4 + 0x1c851e4),0);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x024f0618(iVar5,uVar8,**(undefined4 **)(_UNK_01c853c8 + 0x1c85208));
  if (iVar1 == 0) {
    return 0;
  }
  uVar8 = *puVar7;
  if (*(int *)(**(int **)(_UNK_01c853cc + 0x1c85228) + 0x74) == 0) {
    func_0x014387a4();
  }
  uVar8 = func_0x02af4e18(uVar8,0);
  fVar9 = (float)VectorSignedToFloat(uVar8,(byte)(in_fpscr >> 0x16) & 3);
  fVar11 = (float)VectorSignedToFloat(*(undefined4 *)(iVar1 + 0xc),(byte)(in_fpscr >> 0x16) & 3);
  pcVar6 = (char *)(_UNK_01c853d0 + 0x1c85264);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01c853d4 + 0x1c85278));
    *pcVar6 = '\x01';
  }
  piVar4 = *(int **)(_UNK_01c853d8 + 0x1c85290);
  if (*(int *)(*piVar4 + 0x74) == 0) {
    func_0x014387a4();
  }
  dVar10 = (double)(fVar9 / fVar11);
  dVar12 = (double)func_0x0152f3a8(SUB84(dVar10,0),(int)((ulonglong)dVar10 >> 0x20),&uStack_30);
  if (0.0 <= fVar9 / fVar11) {
    if (dVar12 != 0.5) {
      dVar10 = (double)func_0x024f0e5c(SUB84(dVar10 + 0.5,0),
                                       (int)((ulonglong)(dVar10 + 0.5) >> 0x20));
      goto LAB_01c8533c;
    }
    dVar10 = 1.0;
  }
  else {
    if (dVar12 != -0.5) {
      dVar10 = (double)func_0x0152f308(SUB84(dVar10 + -0.5,0),
                                       (int)((ulonglong)(dVar10 + -0.5) >> 0x20));
      goto LAB_01c8533c;
    }
    dVar10 = -1.0;
  }
  uVar2 = func_0x014e6174(uStack_30,uStack_2c);
  dVar10 = (double)CONCAT44(uStack_2c,uStack_30) + dVar10;
  if ((uVar2 & 1) == 0) {
    dVar10 = (double)CONCAT44(uStack_2c,uStack_30);
  }
LAB_01c8533c:
  uVar8 = (undefined4)(longlong)dVar10;
  if (dVar10 == _UNK_01c85388) {
    uVar8 = 0x80000000;
  }
  if (*(int *)(*piVar4 + 0x74) == 0) {
    func_0x014387a4();
  }
  uVar8 = (*(code *)&SUB_051608f4)(1,uVar8,0);
  return uVar8;
}

