
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017e3c80(int param_1)

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
  
  pcVar6 = (char *)(_UNK_017e408c + 0x17e3c98);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017e4090 + 0x17e3cac));
    func_0x01438628(*(undefined4 *)(_UNK_017e4094 + 0x17e3cb8));
    func_0x01438628(*(undefined4 *)(_UNK_017e4098 + 0x17e3cc4));
    func_0x01438628(*(undefined4 *)(_UNK_017e409c + 0x17e3cd0));
    func_0x01438628(*(undefined4 *)(_UNK_017e40a0 + 0x17e3cdc));
    func_0x01438628(*(undefined4 *)(_UNK_017e40a4 + 0x17e3ce8));
    func_0x01438628(*(undefined4 *)(_UNK_017e40a8 + 0x17e3cf4));
    func_0x01438628(*(undefined4 *)(_UNK_017e40ac + 0x17e3d00));
    func_0x01438628(*(undefined4 *)(_UNK_017e40b0 + 0x17e3d0c));
    *pcVar6 = '\x01';
  }
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = *(int *)(iVar7 + 0xc);
  if (*(int *)(**(int **)(_UNK_017e40b4 + 0x17e3d30) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar7 = func_0x0152ae0c(0,iVar7 + -7,0);
  if (-1 < iVar7) {
    puVar12 = *(undefined4 **)(_UNK_017e40b8 + 0x17e3d70);
    piVar13 = *(int **)(_UNK_017e40bc + 0x17e3d78);
    do {
      iVar8 = *(int *)(param_1 + 8);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      iVar8 = func_0x0152983c(iVar8,iVar7,*puVar12);
      if (iVar8 != 0) {
        iVar8 = *(int *)(param_1 + 8);
        if (iVar8 == 0) {
          func_0x014388e4();
        }
        iVar8 = func_0x0152983c(iVar8,iVar7,*puVar12);
        if (iVar8 == 0) {
          func_0x014388e4();
        }
        iVar8 = func_0x02c3f4b4(iVar8,0);
        if (0 < iVar8) {
          iVar8 = *(int *)(param_1 + 8);
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          iVar8 = func_0x0152983c(iVar8,iVar7,*puVar12);
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          uVar10 = *(undefined4 *)(iVar8 + 0xc);
          if (*(int *)(**(int **)(_UNK_017e40c0 + 0x17e3e1c) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar8 = func_0x024ef144(uVar10,0,0);
          if (iVar8 != 0) {
            iVar8 = func_0x014388d4(**(undefined4 **)(_UNK_017e40c4 + 0x17e3e54));
            func_0x024eeca8(iVar8,0);
            if (iVar8 == 0) {
              func_0x014388e4();
            }
            iVar11 = *(int *)(param_1 + 8);
            iVar4 = *(int *)(param_1 + 0xc);
            *(undefined4 *)(iVar8 + 8) = 0;
            if (iVar11 == 0) {
              func_0x014388e4();
            }
            iVar11 = func_0x0152983c(iVar11,iVar7,*puVar12);
            if (iVar11 == 0) {
              func_0x014388e4();
            }
            uVar10 = func_0x02c3f4b4(iVar11,0);
            iVar11 = *(int *)(param_1 + 8);
            if (iVar11 == 0) {
              func_0x014388e4();
            }
            iVar11 = func_0x0152983c(iVar11,iVar7,*puVar12);
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
            uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_017e40c8 + 0x17e3f44));
            func_0x0152e3ec(uVar5,iVar8,**(undefined4 **)(_UNK_017e40cc + 0x17e3f60),0);
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            FUN_017dd120(iVar4,uVar10,uVar9,uVar2,uVar3,uVar5);
            puVar12 = *(undefined4 **)(_UNK_017e40d0 + 0x17e3fa4);
          }
        }
        if (*(int *)(*piVar13 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar8 = func_0x014e9518(**(undefined4 **)(_UNK_017e40d4 + 0x17e3fc0));
        iVar4 = *(int *)(param_1 + 8);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = func_0x0152983c(iVar4,iVar7,*puVar12);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar11 = *(int *)(param_1 + 8);
        uVar10 = *(undefined4 *)(iVar4 + 0x24);
        if (iVar11 == 0) {
          func_0x014388e4();
        }
        iVar4 = func_0x0152983c(iVar11,iVar7,*puVar12);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        uVar9 = *(undefined4 *)(iVar4 + 0x24);
        if (iVar8 == 0) {
          func_0x014388e4();
        }
        func_0x02bd2cf0(iVar8,uVar10,0xffffffff,10,0,0x12,uVar9,1,0xffffffff,0,0);
      }
      bVar1 = 0 < iVar7;
      iVar7 = iVar7 + -1;
    } while (bVar1);
  }
  return;
}

