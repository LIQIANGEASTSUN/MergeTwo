
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_032b7d90(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 *puVar12;
  int *piVar13;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar6 = (char *)(_UNK_032b81a0 + 0x32b7da8);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032b81a4 + 0x32b7dbc));
    func_0x01438628(*(undefined4 *)(_UNK_032b81a8 + 0x32b7dc8));
    func_0x01438628(*(undefined4 *)(_UNK_032b81ac + 0x32b7dd4));
    func_0x01438628(*(undefined4 *)(_UNK_032b81b0 + 0x32b7de0));
    func_0x01438628(*(undefined4 *)(_UNK_032b81b4 + 0x32b7dec));
    func_0x01438628(*(undefined4 *)(_UNK_032b81b8 + 0x32b7df8));
    func_0x01438628(*(undefined4 *)(_UNK_032b81bc + 0x32b7e04));
    func_0x01438628(*(undefined4 *)(_UNK_032b81c0 + 0x32b7e10));
    func_0x01438628(*(undefined4 *)(_UNK_032b81c4 + 0x32b7e1c));
    *pcVar6 = '\x01';
  }
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = *(int *)(iVar7 + 0xc);
  if (*(int *)(**(int **)(_UNK_032b81c8 + 0x32b7e40) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar7 = func_0x051608f4(0,iVar7 + -7,0);
  if (-1 < iVar7) {
    puVar12 = *(undefined4 **)(_UNK_032b81cc + 0x32b7e80);
    piVar13 = *(int **)(_UNK_032b81d0 + 0x32b7e88);
    do {
      iVar8 = *(int *)(param_1 + 8);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      iVar8 = func_0x04cfd760(iVar8,iVar7,*puVar12);
      if (iVar8 != 0) {
        iVar8 = *(int *)(param_1 + 8);
        if (iVar8 == 0) {
          func_0x014388e4();
        }
        iVar8 = func_0x04cfd760(iVar8,iVar7,*puVar12);
        if (iVar8 == 0) {
          func_0x014388e4();
        }
        iVar8 = func_0x02c3f4b4(iVar8,0);
        if (0 < iVar8) {
          iVar8 = *(int *)(param_1 + 8);
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          iVar8 = func_0x04cfd760(iVar8,iVar7,*puVar12);
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          uVar10 = *(undefined4 *)(iVar8 + 0xc);
          if (*(int *)(**(int **)(_UNK_032b81d4 + 0x32b7f2c) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar8 = func_0x024ef144(uVar10,0,0);
          if (iVar8 != 0) {
            iVar8 = func_0x014388d4(**(undefined4 **)(_UNK_032b81d8 + 0x32b7f64));
            func_0x051b0d14(iVar8,0);
            if (iVar8 == 0) {
              func_0x014388e4();
            }
            iVar11 = *(int *)(param_1 + 8);
            iVar4 = *(int *)(param_1 + 0xc);
            *(undefined4 *)(iVar8 + 8) = 0;
            if (iVar11 == 0) {
              func_0x014388e4();
            }
            iVar11 = func_0x04cfd760(iVar11,iVar7,*puVar12);
            if (iVar11 == 0) {
              func_0x014388e4();
            }
            uVar10 = func_0x02c3f4b4(iVar11,0);
            iVar11 = *(int *)(param_1 + 8);
            if (iVar11 == 0) {
              func_0x014388e4();
            }
            iVar11 = func_0x04cfd760(iVar11,iVar7,*puVar12);
            if (iVar11 == 0) {
              func_0x014388e4();
            }
            iVar11 = *(int *)(iVar11 + 0xc);
            if (iVar11 == 0) {
              func_0x014388e4();
            }
            iVar11 = func_0x024eecb8(iVar11,0);
            if (iVar11 == 0) {
              func_0x014388e4();
            }
            func_0x024ef228(&uStack_30,iVar11,0);
            uVar3 = uStack_28;
            uVar2 = uStack_2c;
            uVar9 = uStack_30;
            uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_032b81dc + 0x32b8054));
            func_0x05096384(uVar5,iVar8,**(undefined4 **)(_UNK_032b81e0 + 0x32b8070),0);
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            FUN_032b040c(iVar4,uVar10,uVar9,uVar2,uVar3,uVar5,0);
            puVar12 = *(undefined4 **)(_UNK_032b81e4 + 0x32b80b8);
          }
        }
        if (*(int *)(*piVar13 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar8 = func_0x04e4a028(**(undefined4 **)(_UNK_032b81e8 + 0x32b80d4));
        iVar4 = *(int *)(param_1 + 8);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = func_0x04cfd760(iVar4,iVar7,*puVar12);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar11 = *(int *)(param_1 + 8);
        uVar10 = *(undefined4 *)(iVar4 + 0x24);
        if (iVar11 == 0) {
          func_0x014388e4();
        }
        iVar4 = func_0x04cfd760(iVar11,iVar7,*puVar12);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        uVar9 = *(undefined4 *)(iVar4 + 0x24);
        if (iVar8 == 0) {
          func_0x014388e4();
        }
        func_0x02bd2cf0(iVar8,uVar10,0xffffffff,10,0,0x15,uVar9,1,0xffffffff,0,0);
      }
      bVar1 = 0 < iVar7;
      iVar7 = iVar7 + -1;
    } while (bVar1);
  }
  return;
}

