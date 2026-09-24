
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_018fb114(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar8 = (char *)(_UNK_018fb4a0 + 0x18fb134);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_018fb4a4 + 0x18fb148));
    func_0x01438628(*(undefined4 *)(_UNK_018fb4a8 + 0x18fb154));
    func_0x01438628(*(undefined4 *)(_UNK_018fb4ac + 0x18fb160));
    func_0x01438628(*(undefined4 *)(_UNK_018fb4b0 + 0x18fb16c));
    func_0x01438628(*(undefined4 *)(_UNK_018fb4b4 + 0x18fb178));
    func_0x01438628(*(undefined4 *)(_UNK_018fb4b8 + 0x18fb184));
    func_0x01438628(*(undefined4 *)(_UNK_018fb4bc + 0x18fb190));
    func_0x01438628(*(undefined4 *)(_UNK_018fb4c0 + 0x18fb19c));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x3a85,0);
  if (iVar1 == 0) {
    iVar1 = FUN_018faa04(param_2,0);
    if (iVar1 == 0) {
      puVar12 = *(undefined4 **)(_UNK_018fb4ec + 0x18fb3c0);
      *param_1 = 0;
      param_1[1] = 0;
      uVar7 = *puVar12;
    }
    else {
      if (*(int *)(**(int **)(_UNK_018fb4c4 + 0x18fb224) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_018fb4c8 + 0x18fb244));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x38);
      if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
        iVar10 = 0;
        puVar12 = *(undefined4 **)(_UNK_018fb4cc + 0x18fb280);
        do {
          iVar2 = func_0x0152983c(iVar1,iVar10,**(undefined4 **)(_UNK_018fb4d0 + 0x18fb28c));
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0xc);
          if (param_3 == 0) {
            func_0x014388e4();
          }
          if (iVar2 == *(int *)(param_3 + 0x10)) {
            if (*(int *)(**(int **)(_UNK_018fb4d4 + 0x18fb2cc) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar2 = func_0x02af5448(param_3,0);
            iVar3 = func_0x0152983c(iVar1,iVar10,**(undefined4 **)(_UNK_018fb4d8 + 0x18fb2fc));
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = *(int *)(iVar3 + 0x10);
            iVar9 = 0;
            while( true ) {
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              iVar11 = *(int *)(iVar3 + 0xc);
              if (iVar11 <= iVar9) break;
              iVar4 = func_0x024f0530(iVar3,iVar9,*puVar12);
              if (iVar9 < iVar11 + -1) {
                if ((iVar4 < iVar2) &&
                   (iVar11 = func_0x024f0530(iVar3,iVar9 + 1,*puVar12), iVar2 <= iVar11)) {
LAB_018fb3e0:
                  iVar2 = func_0x0152983c(iVar1,iVar10,**(undefined4 **)(_UNK_018fb4dc + 0x18fb3f0))
                  ;
                  if (iVar2 == 0) {
                    func_0x014388e4();
                  }
                  iVar2 = *(int *)(iVar2 + 0x14);
                  if (iVar2 == 0) {
                    func_0x014388e4();
                  }
                  uVar5 = func_0x024f0530(iVar2,iVar9,*puVar12);
                  iVar1 = func_0x0152983c(iVar1,iVar10,**(undefined4 **)(_UNK_018fb4e0 + 0x18fb43c))
                  ;
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = *(int *)(iVar1 + 0x18);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  uVar6 = func_0x024f0530(iVar1,iVar9,*puVar12);
                  puVar12 = *(undefined4 **)(_UNK_018fb4e4 + 0x18fb48c);
                  *param_1 = 0;
                  param_1[1] = 0;
                  uVar7 = *puVar12;
                  goto LAB_018fb3d4;
                }
              }
              else if (iVar4 < iVar2) goto LAB_018fb3e0;
              iVar9 = iVar9 + 1;
            }
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < *(int *)(iVar1 + 0xc));
      }
      uVar7 = **(undefined4 **)(_UNK_018fb4e8 + 0x18fb3a4);
      *param_1 = 0;
      param_1[1] = 0;
    }
    uVar5 = 0;
    uVar6 = 0;
LAB_018fb3d4:
    func_0x024f1088(param_1,uVar5,uVar6,uVar7);
  }
  else {
    iVar1 = func_0x029540a4(0x3a85,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028d4168(&uStack_30,iVar1,param_2,param_3,0);
    *param_1 = uStack_30;
    param_1[1] = uStack_2c;
  }
  return;
}

