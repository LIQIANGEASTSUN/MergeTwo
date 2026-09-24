
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017a536c(undefined4 *param_1,undefined4 param_2,int param_3)

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
  
  pcVar8 = (char *)(_UNK_017a56f4 + 0x17a538c);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017a56f8 + 0x17a53a0));
    func_0x01438628(*(undefined4 *)(_UNK_017a56fc + 0x17a53ac));
    func_0x01438628(*(undefined4 *)(_UNK_017a5700 + 0x17a53b8));
    func_0x01438628(*(undefined4 *)(_UNK_017a5704 + 0x17a53c4));
    func_0x01438628(*(undefined4 *)(_UNK_017a5708 + 0x17a53d0));
    func_0x01438628(*(undefined4 *)(_UNK_017a570c + 0x17a53dc));
    func_0x01438628(*(undefined4 *)(_UNK_017a5710 + 0x17a53e8));
    func_0x01438628(*(undefined4 *)(_UNK_017a5714 + 0x17a53f4));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x3add,0);
  if (iVar1 == 0) {
    iVar1 = FUN_0179db3c(param_2);
    if (iVar1 == 0) {
      uVar7 = **(undefined4 **)(_UNK_017a5740 + 0x17a5610);
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      if (*(int *)(**(int **)(_UNK_017a5718 + 0x17a5474) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_017a571c + 0x17a5494));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x18);
      if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
        iVar10 = 0;
        puVar12 = *(undefined4 **)(_UNK_017a5720 + 0x17a54d0);
        do {
          iVar2 = func_0x0152983c(iVar1,iVar10,**(undefined4 **)(_UNK_017a5724 + 0x17a54dc));
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0xc);
          if (param_3 == 0) {
            func_0x014388e4();
          }
          if (iVar2 == *(int *)(param_3 + 0x10)) {
            if (*(int *)(**(int **)(_UNK_017a5728 + 0x17a551c) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar2 = func_0x02af5448(param_3,0);
            iVar3 = func_0x0152983c(iVar1,iVar10,**(undefined4 **)(_UNK_017a572c + 0x17a554c));
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
LAB_017a5634:
                  iVar2 = func_0x0152983c(iVar1,iVar10,**(undefined4 **)(_UNK_017a5730 + 0x17a5644))
                  ;
                  if (iVar2 == 0) {
                    func_0x014388e4();
                  }
                  iVar2 = *(int *)(iVar2 + 0x14);
                  if (iVar2 == 0) {
                    func_0x014388e4();
                  }
                  uVar5 = func_0x024f0530(iVar2,iVar9,*puVar12);
                  iVar1 = func_0x0152983c(iVar1,iVar10,**(undefined4 **)(_UNK_017a5734 + 0x17a5690))
                  ;
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = *(int *)(iVar1 + 0x18);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  uVar6 = func_0x024f0530(iVar1,iVar9,*puVar12);
                  puVar12 = *(undefined4 **)(_UNK_017a5738 + 0x17a56e0);
                  *param_1 = 0;
                  param_1[1] = 0;
                  uVar7 = *puVar12;
                  goto LAB_017a5628;
                }
              }
              else if (iVar4 < iVar2) goto LAB_017a5634;
              iVar9 = iVar9 + 1;
            }
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < *(int *)(iVar1 + 0xc));
      }
      uVar7 = **(undefined4 **)(_UNK_017a573c + 0x17a55f4);
      *param_1 = 0;
      param_1[1] = 0;
    }
    uVar5 = 0;
    uVar6 = 0;
LAB_017a5628:
    func_0x024f1088(param_1,uVar5,uVar6,uVar7);
  }
  else {
    iVar1 = func_0x029540a4(0x3add,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028d4168(&uStack_30,iVar1,param_2,param_3,0);
    *param_1 = uStack_30;
    param_1[1] = uStack_2c;
  }
  return;
}

