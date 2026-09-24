
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_031e8ce0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *puVar6;
  char *pcVar7;
  uint in_fpscr;
  float fVar8;
  double dVar9;
  float fVar10;
  double dVar11;
  double dStack_30;
  
  pcVar7 = (char *)(_UNK_031e9028 + 0x31e8d04);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_031e902c + 0x31e8d18));
    func_0x01438628(*(undefined4 *)(_UNK_031e9030 + 0x31e8d24));
    func_0x01438628(*(undefined4 *)(_UNK_031e9034 + 0x31e8d30));
    func_0x01438628(*(undefined4 *)(_UNK_031e9038 + 0x31e8d3c));
    func_0x01438628(*(undefined4 *)(_UNK_031e903c + 0x31e8d48));
    func_0x01438628(*(undefined4 *)(_UNK_031e9040 + 0x31e8d54));
    func_0x01438628(*(undefined4 *)(_UNK_031e9044 + 0x31e8d60));
    func_0x01438628(*(undefined4 *)(_UNK_031e9048 + 0x31e8d6c));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x3314,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_031e904c + 0x31e8dd0));
    func_0x051b0d14(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    puVar6 = (undefined4 *)(iVar1 + 8);
    *puVar6 = param_2;
    func_0x014385cc(puVar6,param_2);
    iVar2 = func_0x029f3fe4(param_1,0);
    if (iVar2 != 0) {
      if (*(int *)(**(int **)(_UNK_031e9050 + 0x31e8e20) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_031e9054 + 0x31e8e3c));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0x1c);
      uVar3 = func_0x014388d4(**(undefined4 **)(_UNK_031e9058 + 0x31e8e5c));
      func_0x03a062d0(uVar3,iVar1,**(undefined4 **)(_UNK_031e905c + 0x31e8e7c),0);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x04cfe1c0(iVar2,uVar3,**(undefined4 **)(_UNK_031e9060 + 0x31e8ea0));
      if (iVar1 != 0) {
        uVar3 = *puVar6;
        if (*(int *)(**(int **)(_UNK_031e9064 + 0x31e8ec0) + 0x74) == 0) {
          func_0x014387a4();
        }
        uVar3 = func_0x02af4e18(uVar3,0);
        fVar8 = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
        fVar10 = (float)VectorSignedToFloat(*(undefined4 *)(iVar1 + 0xc),
                                            (byte)(in_fpscr >> 0x16) & 3);
        pcVar7 = (char *)(_UNK_031e9068 + 0x31e8efc);
        if (*pcVar7 == '\0') {
          func_0x01438628(*(undefined4 *)(_UNK_031e906c + 0x31e8f10));
          *pcVar7 = '\x01';
        }
        piVar5 = *(int **)(_UNK_031e9070 + 0x31e8f28);
        if (*(int *)(*piVar5 + 0x74) == 0) {
          func_0x014387a4();
        }
        dVar9 = (double)(fVar8 / fVar10);
        dVar11 = (double)func_0x0152f3a8(SUB84(dVar9,0),(int)((ulonglong)dVar9 >> 0x20),&dStack_30);
        if (0.0 <= fVar8 / fVar10) {
          if (dVar11 != 0.5) {
            dVar9 = (double)func_0x024f0e5c(SUB84(dVar9 + 0.5,0),
                                            (int)((ulonglong)(dVar9 + 0.5) >> 0x20));
            goto LAB_031e8fd4;
          }
          dVar9 = 1.0;
        }
        else {
          if (dVar11 != -0.5) {
            dVar9 = (double)func_0x0152f308(SUB84(dVar9 + -0.5,0),
                                            (int)((ulonglong)(dVar9 + -0.5) >> 0x20));
            goto LAB_031e8fd4;
          }
          dVar9 = -1.0;
        }
        uVar4 = func_0x014e6174(SUB84(dStack_30,0),(int)((ulonglong)dStack_30 >> 0x20));
        dVar9 = dStack_30 + dVar9;
        if ((uVar4 & 1) == 0) {
          dVar9 = dStack_30;
        }
LAB_031e8fd4:
        iVar1 = (int)(longlong)dVar9;
        if (dVar9 == _UNK_031e9020) {
          iVar1 = -0x80000000;
        }
        if (*(int *)(*piVar5 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = 1;
        if (1 < iVar1) {
          iVar2 = iVar1;
        }
        return iVar2;
      }
    }
    iVar1 = 0;
  }
  else {
    iVar1 = func_0x029540a4(0x3314,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x028cd694(iVar1,param_1,param_2,param_3,0);
  }
  return iVar1;
}

