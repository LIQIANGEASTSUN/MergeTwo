
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019092ac(int param_1)

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
  
  pcVar6 = (char *)(_UNK_019096b8 + 0x19092c4);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_019096bc + 0x19092d8));
    func_0x01438628(*(undefined4 *)(_UNK_019096c0 + 0x19092e4));
    func_0x01438628(*(undefined4 *)(_UNK_019096c4 + 0x19092f0));
    func_0x01438628(*(undefined4 *)(_UNK_019096c8 + 0x19092fc));
    func_0x01438628(*(undefined4 *)(_UNK_019096cc + 0x1909308));
    func_0x01438628(*(undefined4 *)(_UNK_019096d0 + 0x1909314));
    func_0x01438628(*(undefined4 *)(_UNK_019096d4 + 0x1909320));
    func_0x01438628(*(undefined4 *)(_UNK_019096d8 + 0x190932c));
    func_0x01438628(*(undefined4 *)(_UNK_019096dc + 0x1909338));
    *pcVar6 = '\x01';
  }
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = *(int *)(iVar7 + 0xc);
  if (*(int *)(**(int **)(_UNK_019096e0 + 0x190935c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar7 = func_0x0152ae0c(0,iVar7 + -7,0);
  if (-1 < iVar7) {
    puVar12 = *(undefined4 **)(_UNK_019096e4 + 0x190939c);
    piVar13 = *(int **)(_UNK_019096e8 + 0x19093a4);
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
          if (*(int *)(**(int **)(_UNK_019096ec + 0x1909448) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar8 = func_0x024ef144(uVar10,0,0);
          if (iVar8 != 0) {
            iVar8 = func_0x014388d4(**(undefined4 **)(_UNK_019096f0 + 0x1909480));
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
            uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_019096f4 + 0x1909570));
            func_0x0152e3ec(uVar5,iVar8,**(undefined4 **)(_UNK_019096f8 + 0x190958c),0);
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            FUN_01901f6c(iVar4,uVar10,uVar9,uVar2,uVar3,uVar5);
            puVar12 = *(undefined4 **)(_UNK_019096fc + 0x19095d0);
          }
        }
        if (*(int *)(*piVar13 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar8 = func_0x014e9518(**(undefined4 **)(_UNK_01909700 + 0x19095ec));
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
        func_0x02bd2cf0(iVar8,uVar10,0xffffffff,10,0,0x18,uVar9,1,0xffffffff,0,0);
      }
      bVar1 = 0 < iVar7;
      iVar7 = iVar7 + -1;
    } while (bVar1);
  }
  return;
}

