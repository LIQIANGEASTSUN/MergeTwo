
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02bed260(int param_1,float param_2,float param_3,undefined4 param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint in_fpscr;
  float fVar10;
  float fVar11;
  int iVar12;
  int iVar13;
  
  pcVar4 = (char *)(_UNK_02bed664 + 0x2bed288);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bed668 + 0x2bed2a0));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x218e,0);
  if (iVar1 == 0) {
    if (0 < (int)param_5) {
      iVar1 = *(int *)(param_1 + 0x44);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(uint *)(iVar1 + 0xc) <= param_5) {
        func_0x014388e8();
      }
      iVar1 = *(int *)(iVar1 + param_5 * 4 + 0x10);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x02c3f4b4(iVar1,0);
      if (-1 < iVar1) {
        iVar3 = *(int *)(param_1 + 0x68);
        iVar8 = 4;
        fVar11 = *(float *)(param_1 + 0x40) * 0.5;
        fVar10 = *(float *)(param_1 + 0x3c) * 0.5;
        iVar12 = (int)fVar11;
        uVar2 = in_fpscr & 0xfffffff | (uint)(fVar10 == _UNK_02bed660) << 0x1e;
        iVar13 = (int)fVar10;
        if (fVar11 == _UNK_02bed660) {
          iVar12 = -0x80000000;
        }
        if (SUB41(uVar2 >> 0x1e,0)) {
          iVar13 = -0x80000000;
        }
        while( true ) {
          iVar6 = *(int *)(param_1 + 100);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          uVar5 = iVar8 - 4;
          if (*(int *)(iVar6 + 0xc) <= (int)uVar5) break;
          iVar6 = *(int *)(param_1 + 100);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          if (*(uint *)(iVar6 + 0xc) <= uVar5) {
            func_0x014388e8();
          }
          iVar6 = *(int *)(iVar6 + iVar8 * 4);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar6 + 0xc) == 0) {
            func_0x014388e8();
          }
          iVar9 = *(int *)(param_1 + 100);
          iVar6 = *(int *)(iVar6 + 0x10);
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          if (*(uint *)(iVar9 + 0xc) <= uVar5) {
            func_0x014388e8();
          }
          iVar9 = *(int *)(iVar9 + iVar8 * 4);
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          if (*(uint *)(iVar9 + 0xc) < 2) {
            func_0x014388e8();
          }
          fVar10 = (float)VectorSignedToFloat(iVar6 * (iVar13 - iVar3),(byte)(uVar2 >> 0x16) & 3);
          fVar11 = (float)VectorSignedToFloat(*(int *)(iVar9 + 0x14) * (iVar12 - iVar3),
                                              (byte)(uVar2 >> 0x16) & 3);
          uVar5 = FUN_02becc6c(param_1,param_2 + fVar10,param_3 + fVar11,param_4);
          if ((-1 < (int)uVar5) && (uVar5 != param_5)) {
            iVar6 = *(int *)(param_1 + 0x44);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            if (*(uint *)(iVar6 + 0xc) <= uVar5) {
              func_0x014388e8();
            }
            if (*(int *)(iVar6 + uVar5 * 4 + 0x10) != 0) {
              iVar6 = *(int *)(param_1 + 0x44);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              if (*(uint *)(iVar6 + 0xc) <= uVar5) {
                func_0x014388e8();
              }
              iVar6 = *(int *)(iVar6 + uVar5 * 4 + 0x10);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              uVar7 = *(undefined4 *)(iVar6 + 0xc);
              if (*(int *)(**(int **)(_UNK_02bed66c + 0x2bed520) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar6 = func_0x024eec50(uVar7,0,0);
              if (iVar6 == 0) {
                iVar6 = *(int *)(param_1 + 0x44);
                if (iVar6 == 0) {
                  func_0x014388e4();
                }
                if (*(uint *)(iVar6 + 0xc) <= uVar5) {
                  func_0x014388e8();
                }
                iVar6 = *(int *)(iVar6 + uVar5 * 4 + 0x10);
                if (iVar6 == 0) {
                  func_0x014388e4();
                }
                iVar6 = func_0x02c3f4b4(iVar6,0);
                if (iVar6 == iVar1) {
                  iVar6 = *(int *)(param_1 + 0x44);
                  if (iVar6 == 0) {
                    func_0x014388e4();
                  }
                  if (*(uint *)(iVar6 + 0xc) <= uVar5) {
                    func_0x014388e8();
                  }
                  iVar6 = *(int *)(iVar6 + uVar5 * 4 + 0x10);
                  if (iVar6 == 0) {
                    func_0x014388e4();
                  }
                  if (*(int *)(iVar6 + 0x14) == 1) {
                    return uVar5;
                  }
                  iVar6 = *(int *)(param_1 + 0x44);
                  if (iVar6 == 0) {
                    func_0x014388e4();
                  }
                  if (*(uint *)(iVar6 + 0xc) <= uVar5) {
                    func_0x014388e8();
                  }
                  iVar6 = *(int *)(iVar6 + uVar5 * 4 + 0x10);
                  if (iVar6 == 0) {
                    func_0x014388e4();
                  }
                  if (*(int *)(iVar6 + 0x14) == 3) {
                    return uVar5;
                  }
                }
              }
            }
          }
          iVar8 = iVar8 + 1;
        }
      }
    }
    uVar2 = FUN_02becc6c(param_1,param_2,param_3,param_4);
  }
  else {
    iVar1 = func_0x029540a4(0x218e,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028b61b4(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return uVar2;
}

