
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02bd880c(undefined4 param_1,undefined4 param_2,float *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  uint in_fpscr;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  
  pcVar6 = (char *)(_UNK_02bd8b58 + 0x2bd882c);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bd8b5c + 0x2bd8844));
    func_0x01438628(*(undefined4 *)(_UNK_02bd8b60 + 0x2bd8850));
    func_0x01438628(*(undefined4 *)(_UNK_02bd8b64 + 0x2bd885c));
    func_0x01438628(*(undefined4 *)(_UNK_02bd8b68 + 0x2bd8868));
    func_0x01438628(*(undefined4 *)(_UNK_02bd8b6c + 0x2bd8874));
    func_0x01438628(*(undefined4 *)(_UNK_02bd8b70 + 0x2bd8880));
    *pcVar6 = '\x01';
  }
  iVar9 = 0;
  iVar1 = func_0x02953fd4(0x5c63,0);
  if (iVar1 == 0) {
    iVar1 = FUN_02bad204(param_1,param_2,param_4);
    if (iVar1 != 0) {
      if (*(int *)(**(int **)(_UNK_02bd8b74 + 0x2bd890c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02bd8b78 + 0x2bd8928));
      uVar7 = *(undefined4 *)(iVar1 + 8);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar9 = 0;
      iVar2 = func_0x029a6fa8(iVar2,uVar7,0);
      if (iVar2 != 0) {
        piVar8 = *(int **)(_UNK_02bd8b7c + 0x2bd896c);
        if (*(int *)(*piVar8 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02bd8b80 + 0x2bd8988));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar9 = 0;
        iVar3 = func_0x02c4aa30(iVar3,iVar2,0);
        if ((iVar3 != 0) && (iVar3 = FUN_02bd72b0(param_1,param_2,iVar2,param_4), iVar3 < 1)) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02bd8b84 + 0x2bd89f4));
          uVar7 = *(undefined4 *)(iVar1 + 8);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar9 = 0;
          iVar3 = func_0x02c4b714(iVar3,uVar7,iVar1,0);
          if (iVar3 == 0) {
            if (*(int *)(**(int **)(_UNK_02bd8b88 + 0x2bd8a38) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar9 = func_0x014e9518(**(undefined4 **)(_UNK_02bd8b8c + 0x2bd8a58));
            if (iVar9 == 0) {
              func_0x014388e4();
            }
            uVar13 = func_0x026ffbe0(iVar9,0);
            iVar10 = *(int *)(iVar1 + 0x18);
            iVar3 = FUN_02bd84dc(param_1,iVar2,iVar1);
            if (*(int *)(**(int **)(_UNK_02bd8b90 + 0x2bd8aa4) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_02bd8b94 + 0x2bd8ac0));
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            iVar9 = 0;
            iVar5 = func_0x014e6e04((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),1000,0);
            iVar4 = func_0x02c4baac(iVar4,iVar2,0);
            if ((iVar4 != 0) && (*(char *)(iVar2 + 0x59) == '\0')) {
              iVar10 = *(int *)(iVar1 + 0x48);
            }
            fVar11 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
            fVar12 = (float)VectorSignedToFloat(iVar5 - iVar10,(byte)(in_fpscr >> 0x16) & 3);
            *param_3 = fVar12 / fVar11;
            if (fVar12 < fVar11) {
              iVar9 = iVar3 - (int)fVar12;
            }
          }
        }
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x5c63,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar9 = func_0x028b7d1c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return iVar9;
}

