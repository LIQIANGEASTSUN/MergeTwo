
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02bad670(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  float fVar4;
  char *pcVar5;
  int *piVar6;
  int *piVar7;
  uint in_fpscr;
  float fVar8;
  float fStack_30;
  float fStack_2c;
  
  pcVar5 = (char *)(_UNK_02bad9ec + 0x2bad690);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bad9f0 + 0x2bad6a4));
    func_0x01438628(*(undefined4 *)(_UNK_02bad9f4 + 0x2bad6b0));
    func_0x01438628(*(undefined4 *)(_UNK_02bad9f8 + 0x2bad6bc));
    func_0x01438628(*(undefined4 *)(_UNK_02bad9fc + 0x2bad6c8));
    func_0x01438628(*(undefined4 *)(_UNK_02bada00 + 0x2bad6d4));
    func_0x01438628(*(undefined4 *)(_UNK_02bada04 + 0x2bad6e0));
    *pcVar5 = '\x01';
  }
  fStack_2c = 0.0;
  fStack_30 = 0.0;
  iVar1 = func_0x02953fd4(0x5cc4,0);
  if (iVar1 == 0) {
    piVar6 = *(int **)(param_1 + 0x10);
    if (piVar6 == (int *)0x0) {
      func_0x014388e4();
    }
    uVar3 = (**(code **)(*piVar6 + 0xf0))(piVar6,0,100,*(undefined4 *)(*piVar6 + 0xf4));
    fVar8 = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
    fVar8 = fVar8 / _UNK_02bad9e8;
    fStack_2c = fVar8;
    fVar4 = (float)FUN_02bad358(param_1,param_2);
    uVar2 = (uint)(fVar8 < fVar4);
    fStack_30 = fVar4;
    if (*(int *)(**(int **)(_UNK_02bada08 + 0x2bad7a8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x015fa09c(0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar1 + 0xc) == 1) {
      piVar6 = (int *)func_0x014388d4(**(undefined4 **)(_UNK_02bada0c + 0x2bad7f4));
      func_0x024ef678(piVar6,0);
      if (piVar6 == (int *)0x0) {
        func_0x014388e4();
      }
      func_0x024ef6e8(piVar6,**(undefined4 **)(_UNK_02bada10 + 0x2bad820),0);
      uVar3 = func_0x0152542c(&fStack_2c,0);
      if (piVar6 == (int *)0x0) {
        func_0x014388e4();
        func_0x024ef6e8(0,uVar3,0);
        func_0x014388e4();
      }
      else {
        func_0x024ef6e8(piVar6,uVar3,0);
      }
      func_0x024ef6e8(piVar6,**(undefined4 **)(_UNK_02bada14 + 0x2bad87c),0);
      uVar3 = func_0x0152542c(&fStack_30,0);
      if (piVar6 == (int *)0x0) {
        func_0x014388e4();
      }
      func_0x024ef6e8(piVar6,uVar3,0);
      piVar7 = *(int **)(_UNK_02bada18 + 0x2bad8bc);
      if (*(int *)(*piVar7 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x01588bac(0);
      if (piVar6 == (int *)0x0) {
        func_0x014388e4();
      }
      uVar3 = (**(code **)(*piVar6 + 0xd8))(piVar6,*(undefined4 *)(*piVar6 + 0xdc));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      *(undefined4 *)(iVar1 + 0x124) = uVar3;
      func_0x014385cc((undefined4 *)(iVar1 + 0x124),uVar3);
      if (fVar4 <= fVar8) {
        if (*(int *)(*piVar7 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x01588bac(0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        *(undefined4 *)(iVar1 + 0x128) = **(undefined4 **)(_UNK_02bada1c + 0x2bad95c);
        func_0x014385cc((undefined4 *)(iVar1 + 0x128));
      }
      if (*(int *)(*piVar7 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x01588bac(0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(char *)(iVar1 + 0x12d) != '\0') {
        if (*(int *)(*piVar7 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x01588bac(0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar2 = 0;
        if (*(char *)(iVar1 + 300) != '\0') {
          uVar2 = 1;
        }
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x5cc4,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02873a70(iVar1,param_1,param_2,0);
  }
  return uVar2;
}

