
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c74f00(int param_1)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  pcVar6 = (char *)(_UNK_02c75304 + 0x2c74f1c);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c75308 + 0x2c74f30));
    func_0x01438628(*(undefined4 *)(_UNK_02c7530c + 0x2c74f3c));
    func_0x01438628(*(undefined4 *)(_UNK_02c75310 + 0x2c74f48));
    func_0x01438628(*(undefined4 *)(_UNK_02c75314 + 0x2c74f54));
    func_0x01438628(*(undefined4 *)(_UNK_02c75318 + 0x2c74f60));
    func_0x01438628(*(undefined4 *)(_UNK_02c7531c + 0x2c74f6c));
    func_0x01438628(*(undefined4 *)(_UNK_02c75320 + 0x2c74f78));
    func_0x01438628(*(undefined4 *)(_UNK_02c75324 + 0x2c74f84));
    func_0x01438628(*(undefined4 *)(_UNK_02c75328 + 0x2c74f90));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x6033,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x6033,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x024f56c0(&uStack_48,0,0);
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&stack0xffffffd0,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&stack0xffffffd0,param_1,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x024f56d0(iVar5,uVar7,&stack0xffffffd0,uVar4,0,0);
    return;
  }
  piVar8 = *(int **)(_UNK_02c7532c + 0x2c74ff0);
  if (*(int *)(*piVar8 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar9 = *(undefined4 **)(_UNK_02c75330 + 0x2c7500c);
  iVar1 = func_0x014e9518(*puVar9);
  uVar4 = *(undefined4 *)(param_1 + 0x78);
  uVar7 = FUN_02c6b6f0(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = FUN_02bd1400(iVar1,uVar4,uVar7,0);
  if (*(int *)(**(int **)(_UNK_02c75334 + 0x2c75054) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_02c75338 + 0x2c75070));
  uVar7 = *(undefined4 *)(param_1 + 0x7c);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  iVar5 = func_0x029a6fa8(iVar5,uVar7,0);
  if ((iVar5 != 0) && (iVar1 == 0 && 0 < *(int *)(param_1 + 0x7c))) {
    iVar1 = **(int **)(**(int **)(_UNK_02c7533c + 0x2c750c8) + 0x5c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02b65c74(iVar1,0xc,0,0,0);
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(*puVar9);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar7 = 0;
    iVar1 = FUN_02be5cb0(iVar1,iVar5,0);
    if (((iVar1 == 0) || (*(int *)(iVar1 + 0xc) < 2)) && (uVar7 = 0, *(int *)(iVar5 + 0x20) != 1)) {
      uVar7 = 1;
    }
    pcVar6 = (char *)(_UNK_02c75340 + 0x2c75164);
    if (*pcVar6 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c75344 + 0x2c75178));
      *pcVar6 = '\x01';
    }
    pfVar2 = *(float **)(**(int **)(_UNK_02c75348 + 0x2c7518c) + 0x5c);
    fVar11 = *pfVar2;
    fVar12 = pfVar2[1];
    fVar10 = pfVar2[2];
    iVar1 = **(int **)(**(int **)(_UNK_02c7534c + 0x2c75198) + 0x5c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_02c3d868(iVar1,0);
    uVar4 = *(undefined4 *)(param_1 + 0x78);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_02beba7c(iVar1,uVar4,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0xc);
    if (*(int *)(**(int **)(_UNK_02c75350 + 0x2c75208) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x024ef144(iVar1,0,0);
    if (iVar3 != 0) {
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x024eecb8(iVar1,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x024ef228(&fStack_44,iVar1,0);
      fVar11 = fStack_44 + _UNK_02c75300;
      fVar10 = fStack_3c + _UNK_02c75300;
      fVar12 = fStack_40 + 0.5;
    }
    if (*(int *)(**(int **)(_UNK_02c75354 + 0x2c75298) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x03b2c734(**(undefined4 **)(_UNK_02c75358 + 0x2c752b4));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_48 = 0;
    func_0x02c7a520(iVar1,iVar5,0,uVar7,0,fVar11,fVar12,fVar10);
  }
  return;
}

