
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03180bfc(undefined4 *param_1,undefined4 param_2,int param_3)

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
  
  pcVar8 = (char *)(_UNK_03180f84 + 0x3180c1c);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03180f88 + 0x3180c30));
    func_0x01438628(*(undefined4 *)(_UNK_03180f8c + 0x3180c3c));
    func_0x01438628(*(undefined4 *)(_UNK_03180f90 + 0x3180c48));
    func_0x01438628(*(undefined4 *)(_UNK_03180f94 + 0x3180c54));
    func_0x01438628(*(undefined4 *)(_UNK_03180f98 + 0x3180c60));
    func_0x01438628(*(undefined4 *)(_UNK_03180f9c + 0x3180c6c));
    func_0x01438628(*(undefined4 *)(_UNK_03180fa0 + 0x3180c78));
    func_0x01438628(*(undefined4 *)(_UNK_03180fa4 + 0x3180c84));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x3a41,0);
  if (iVar1 == 0) {
    iVar1 = FUN_03178744(param_2);
    if (iVar1 == 0) {
      uVar7 = **(undefined4 **)(_UNK_03180fd0 + 0x3180ea0);
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      if (*(int *)(**(int **)(_UNK_03180fa8 + 0x3180d04) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03180fac + 0x3180d24));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x18);
      if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
        iVar10 = 0;
        puVar12 = *(undefined4 **)(_UNK_03180fb0 + 0x3180d60);
        do {
          iVar2 = func_0x04cfd760(iVar1,iVar10,**(undefined4 **)(_UNK_03180fb4 + 0x3180d6c));
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0xc);
          if (param_3 == 0) {
            func_0x014388e4();
          }
          if (iVar2 == *(int *)(param_3 + 0x10)) {
            if (*(int *)(**(int **)(_UNK_03180fb8 + 0x3180dac) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar2 = func_0x02af5448(param_3,0);
            iVar3 = func_0x04cfd760(iVar1,iVar10,**(undefined4 **)(_UNK_03180fbc + 0x3180ddc));
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
              iVar4 = func_0x04cd26d0(iVar3,iVar9,*puVar12);
              if (iVar9 < iVar11 + -1) {
                if ((iVar4 < iVar2) &&
                   (iVar11 = func_0x04cd26d0(iVar3,iVar9 + 1,*puVar12), iVar2 <= iVar11)) {
LAB_03180ec4:
                  iVar2 = func_0x04cfd760(iVar1,iVar10,**(undefined4 **)(_UNK_03180fc0 + 0x3180ed4))
                  ;
                  if (iVar2 == 0) {
                    func_0x014388e4();
                  }
                  iVar2 = *(int *)(iVar2 + 0x14);
                  if (iVar2 == 0) {
                    func_0x014388e4();
                  }
                  uVar5 = func_0x04cd26d0(iVar2,iVar9,*puVar12);
                  iVar1 = func_0x04cfd760(iVar1,iVar10,**(undefined4 **)(_UNK_03180fc4 + 0x3180f20))
                  ;
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = *(int *)(iVar1 + 0x18);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  uVar6 = func_0x04cd26d0(iVar1,iVar9,*puVar12);
                  puVar12 = *(undefined4 **)(_UNK_03180fc8 + 0x3180f70);
                  *param_1 = 0;
                  param_1[1] = 0;
                  uVar7 = *puVar12;
                  goto LAB_03180eb8;
                }
              }
              else if (iVar4 < iVar2) goto LAB_03180ec4;
              iVar9 = iVar9 + 1;
            }
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < *(int *)(iVar1 + 0xc));
      }
      uVar7 = **(undefined4 **)(_UNK_03180fcc + 0x3180e84);
      *param_1 = 0;
      param_1[1] = 0;
    }
    uVar5 = 0;
    uVar6 = 0;
LAB_03180eb8:
    func_0x03fc9b24(param_1,uVar5,uVar6,uVar7);
  }
  else {
    iVar1 = func_0x029540a4(0x3a41,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028d4168(&uStack_30,iVar1,param_2,param_3,0);
    *param_1 = uStack_30;
    param_1[1] = uStack_2c;
  }
  return;
}

