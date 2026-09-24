
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017d62d8(undefined4 *param_1,undefined4 param_2,int param_3)

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
  
  pcVar8 = (char *)(_UNK_017d6664 + 0x17d62f8);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017d6668 + 0x17d630c));
    func_0x01438628(*(undefined4 *)(_UNK_017d666c + 0x17d6318));
    func_0x01438628(*(undefined4 *)(_UNK_017d6670 + 0x17d6324));
    func_0x01438628(*(undefined4 *)(_UNK_017d6674 + 0x17d6330));
    func_0x01438628(*(undefined4 *)(_UNK_017d6678 + 0x17d633c));
    func_0x01438628(*(undefined4 *)(_UNK_017d667c + 0x17d6348));
    func_0x01438628(*(undefined4 *)(_UNK_017d6680 + 0x17d6354));
    func_0x01438628(*(undefined4 *)(_UNK_017d6684 + 0x17d6360));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x3a4f,0);
  if (iVar1 == 0) {
    iVar1 = FUN_017d5bc8(param_2,0);
    if (iVar1 == 0) {
      puVar12 = *(undefined4 **)(_UNK_017d66b0 + 0x17d6584);
      *param_1 = 0;
      param_1[1] = 0;
      uVar7 = *puVar12;
    }
    else {
      if (*(int *)(**(int **)(_UNK_017d6688 + 0x17d63e8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_017d668c + 0x17d6408));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x38);
      if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
        iVar10 = 0;
        puVar12 = *(undefined4 **)(_UNK_017d6690 + 0x17d6444);
        do {
          iVar2 = func_0x0152983c(iVar1,iVar10,**(undefined4 **)(_UNK_017d6694 + 0x17d6450));
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0xc);
          if (param_3 == 0) {
            func_0x014388e4();
          }
          if (iVar2 == *(int *)(param_3 + 0x10)) {
            if (*(int *)(**(int **)(_UNK_017d6698 + 0x17d6490) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar2 = func_0x02af5448(param_3,0);
            iVar3 = func_0x0152983c(iVar1,iVar10,**(undefined4 **)(_UNK_017d669c + 0x17d64c0));
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
LAB_017d65a4:
                  iVar2 = func_0x0152983c(iVar1,iVar10,**(undefined4 **)(_UNK_017d66a0 + 0x17d65b4))
                  ;
                  if (iVar2 == 0) {
                    func_0x014388e4();
                  }
                  iVar2 = *(int *)(iVar2 + 0x14);
                  if (iVar2 == 0) {
                    func_0x014388e4();
                  }
                  uVar5 = func_0x024f0530(iVar2,iVar9,*puVar12);
                  iVar1 = func_0x0152983c(iVar1,iVar10,**(undefined4 **)(_UNK_017d66a4 + 0x17d6600))
                  ;
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = *(int *)(iVar1 + 0x18);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  uVar6 = func_0x024f0530(iVar1,iVar9,*puVar12);
                  puVar12 = *(undefined4 **)(_UNK_017d66a8 + 0x17d6650);
                  *param_1 = 0;
                  param_1[1] = 0;
                  uVar7 = *puVar12;
                  goto LAB_017d6598;
                }
              }
              else if (iVar4 < iVar2) goto LAB_017d65a4;
              iVar9 = iVar9 + 1;
            }
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < *(int *)(iVar1 + 0xc));
      }
      uVar7 = **(undefined4 **)(_UNK_017d66ac + 0x17d6568);
      *param_1 = 0;
      param_1[1] = 0;
    }
    uVar5 = 0;
    uVar6 = 0;
LAB_017d6598:
    func_0x024f1088(param_1,uVar5,uVar6,uVar7);
  }
  else {
    iVar1 = func_0x029540a4(0x3a4f,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028d4168(&uStack_30,iVar1,param_2,param_3,0);
    *param_1 = uStack_30;
    param_1[1] = uStack_2c;
  }
  return;
}

