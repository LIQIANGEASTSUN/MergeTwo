
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01da87a8(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  uint in_fpscr;
  float fVar11;
  float fVar12;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  float fStack_34;
  
  pcVar5 = (char *)(_UNK_01da8e54 + 0x1da87d0);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01da8e58 + 0x1da87e8));
    func_0x01438628(*(undefined4 *)(_UNK_01da8e5c + 0x1da87f4));
    func_0x01438628(*(undefined4 *)(_UNK_01da8e60 + 0x1da8800));
    func_0x01438628(*(undefined4 *)(_UNK_01da8e64 + 0x1da880c));
    func_0x01438628(*(undefined4 *)(_UNK_01da8e68 + 0x1da8818));
    func_0x01438628(*(undefined4 *)(_UNK_01da8e6c + 0x1da8824));
    func_0x01438628(*(undefined4 *)(_UNK_01da8e70 + 0x1da8830));
    func_0x01438628(*(undefined4 *)(_UNK_01da8e74 + 0x1da883c));
    func_0x01438628(*(undefined4 *)(_UNK_01da8e78 + 0x1da8848));
    func_0x01438628(*(undefined4 *)(_UNK_01da8e7c + 0x1da8854));
    func_0x01438628(*(undefined4 *)(_UNK_01da8e80 + 0x1da8860));
    func_0x01438628(*(undefined4 *)(_UNK_01da8e84 + 0x1da886c));
    func_0x01438628(*(undefined4 *)(_UNK_01da8e88 + 0x1da8878));
    func_0x01438628(*(undefined4 *)(_UNK_01da8e8c + 0x1da8884));
    func_0x01438628(*(undefined4 *)(_UNK_01da8e90 + 0x1da8890));
    func_0x01438628(*(undefined4 *)(_UNK_01da8e94 + 0x1da889c));
    func_0x01438628(*(undefined4 *)(_UNK_01da8e98 + 0x1da88a8));
    func_0x01438628(*(undefined4 *)(_UNK_01da8e9c + 0x1da88b4));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x3ef9,0);
  if (iVar1 == 0) {
    iVar1 = FUN_01da3ff8(param_1);
    if (iVar1 != 0) {
      iVar1 = FUN_01da7774(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x024f0584(iVar1,param_3,**(undefined4 **)(_UNK_01da8ea0 + 0x1da8954));
      if (iVar1 != 0) {
        iVar1 = FUN_01da70cc(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar6 = *(int *)(iVar1 + 0x38);
        iVar1 = FUN_01da8660(param_1);
        if (iVar6 != iVar1) {
          iVar1 = FUN_01da70cc(param_1);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          func_0x026cda10(iVar1,0,0);
          iVar1 = FUN_01da70cc(param_1);
          uVar2 = FUN_01da8660(param_1);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          func_0x026cdacc(iVar1,uVar2,0);
        }
        iVar1 = FUN_01da70cc(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        fStack_34 = (float)FUN_01da6de0(param_1,*(undefined4 *)(iVar1 + 0x34));
        iVar1 = FUN_01da70cc(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uStack_38 = *(undefined4 *)(iVar1 + 0x34);
        uVar2 = func_0x01524ffc(&uStack_38,0);
        uVar3 = func_0x0152542c(&fStack_34,0);
        uVar2 = func_0x024eee88(**(undefined4 **)(_UNK_01da8ea4 + 0x1da8a64),uVar2,
                                **(undefined4 **)(_UNK_01da8ea8 + 0x1da8a70),uVar3,0);
        if (*(int *)(**(int **)(_UNK_01da8eac + 0x1da8a8c) + 0x74) == 0) {
          func_0x014387a4();
        }
        func_0x024ef174(uVar2,0);
        iVar1 = FUN_01da7774(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x0152a69c(iVar1,param_3,**(undefined4 **)(_UNK_01da8eb0 + 0x1da8ad0));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        fVar11 = (float)VectorSignedToFloat(*(undefined4 *)(iVar1 + 0x18),
                                            (byte)(in_fpscr >> 0x16) & 3);
        iVar8 = 0;
        fVar11 = (float)func_0x024ef2c8(0,fStack_34 * fVar11,0);
        iVar6 = 0;
        puVar10 = *(undefined4 **)(_UNK_01da8eb4 + 0x1da8b20);
        while( true ) {
          iVar9 = *(int *)(iVar1 + 0x14);
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar9 + 0xc) <= iVar8) {
            return;
          }
          iVar9 = *(int *)(iVar1 + 0x14);
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          iVar9 = func_0x024f0530(iVar9,iVar8,*puVar10);
          iVar6 = iVar9 + iVar6;
          fVar12 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x16) & 3);
          in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar11 < fVar12) << 0x1f;
          if (SUB41(in_fpscr >> 0x1f,0)) break;
          iVar8 = iVar8 + 1;
        }
        iVar1 = *(int *)(iVar1 + 0x10);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x024f0530(iVar1,iVar8,*puVar10);
        if (-1 < iVar1) {
          piVar7 = *(int **)(_UNK_01da8eb8 + 0x1da8bb0);
          if (*(int *)(*piVar7 + 0x74) == 0) {
            func_0x014387a4();
          }
          puVar10 = *(undefined4 **)(_UNK_01da8ebc + 0x1da8bcc);
          iVar6 = func_0x014e9518(*puVar10);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar1 = func_0x029a6fa8(iVar6,iVar1,0);
          if (0 < param_5) {
            do {
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              iVar6 = *(int *)(iVar1 + 0x4c);
              if (0 < iVar6) {
                if (*(int *)(*piVar7 + 0x74) == 0) {
                  func_0x014387a4();
                }
                iVar1 = func_0x014e9518(*puVar10);
                if (iVar1 == 0) {
                  func_0x014388e4();
                }
                iVar1 = func_0x029a6fa8(iVar1,iVar6,0);
              }
              param_5 = param_5 + -1;
            } while (param_5 != 0);
          }
          if (*(int *)(**(int **)(_UNK_01da8ec0 + 0x1da8c68) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar6 = func_0x0202346c(0);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          uVar2 = func_0x01524ffc(iVar1 + 0x2c,0);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          func_0x020257a4(iVar6,0x203,uVar2,0,0,0,0);
          iVar6 = FUN_01da84b4(param_1);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          uVar2 = *(undefined4 *)(iVar1 + 8);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          func_0x03b75ba0(iVar6,uVar2,**(undefined4 **)(_UNK_01da8ec4 + 0x1da8d1c));
          if (*(int *)(**(int **)(_UNK_01da8ec8 + 0x1da8d30) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_01da8ecc + 0x1da8d4c));
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar6 = func_0x03579aec(iVar6,**(undefined4 **)(_UNK_01da8ed4 + 0x1da8d7c),
                                  **(undefined4 **)(_UNK_01da8ed0 + 0x1da8d70));
          uVar2 = *(undefined4 *)(iVar1 + 8);
          if (param_4 == 0) {
            func_0x014388e4();
          }
          func_0x02bebb14(&uStack_44,param_4,param_2,0);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          uVar3 = func_0x024eecb8(iVar6,0);
          uVar4 = func_0x014388d4(**(undefined4 **)(_UNK_01da8ed8 + 0x1da8ddc));
          func_0x0152e3ec(uVar4,param_1,**(undefined4 **)(_UNK_01da8edc + 0x1da8df8),0);
          if (*(int *)(**(int **)(_UNK_01da8ee0 + 0x1da8e0c) + 0x74) == 0) {
            func_0x014387a4();
          }
          func_0x01da8ee4(uVar2,uStack_44,uStack_40,uVar3,0x3f4ccccd,1,uVar4);
        }
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x3ef9,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028bd544(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return;
}

