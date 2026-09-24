
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02fd1fb4(undefined4 *param_1,undefined4 param_2,int param_3)

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
  
  pcVar8 = (char *)(_UNK_02fd233c + 0x2fd1fd4);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02fd2340 + 0x2fd1fe8));
    func_0x01438628(*(undefined4 *)(_UNK_02fd2344 + 0x2fd1ff4));
    func_0x01438628(*(undefined4 *)(_UNK_02fd2348 + 0x2fd2000));
    func_0x01438628(*(undefined4 *)(_UNK_02fd234c + 0x2fd200c));
    func_0x01438628(*(undefined4 *)(_UNK_02fd2350 + 0x2fd2018));
    func_0x01438628(*(undefined4 *)(_UNK_02fd2354 + 0x2fd2024));
    func_0x01438628(*(undefined4 *)(_UNK_02fd2358 + 0x2fd2030));
    func_0x01438628(*(undefined4 *)(_UNK_02fd235c + 0x2fd203c));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x3b91,0);
  if (iVar1 == 0) {
    iVar1 = FUN_02fc9070(param_2);
    if (iVar1 == 0) {
      uVar7 = **(undefined4 **)(_UNK_02fd2388 + 0x2fd2258);
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      if (*(int *)(**(int **)(_UNK_02fd2360 + 0x2fd20bc) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02fd2364 + 0x2fd20dc));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x18);
      if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
        iVar10 = 0;
        puVar12 = *(undefined4 **)(_UNK_02fd2368 + 0x2fd2118);
        do {
          iVar2 = func_0x04cfd760(iVar1,iVar10,**(undefined4 **)(_UNK_02fd236c + 0x2fd2124));
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0xc);
          if (param_3 == 0) {
            func_0x014388e4();
          }
          if (iVar2 == *(int *)(param_3 + 0x10)) {
            if (*(int *)(**(int **)(_UNK_02fd2370 + 0x2fd2164) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar2 = func_0x02af5448(param_3,0);
            iVar3 = func_0x04cfd760(iVar1,iVar10,**(undefined4 **)(_UNK_02fd2374 + 0x2fd2194));
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
LAB_02fd227c:
                  iVar2 = func_0x04cfd760(iVar1,iVar10,**(undefined4 **)(_UNK_02fd2378 + 0x2fd228c))
                  ;
                  if (iVar2 == 0) {
                    func_0x014388e4();
                  }
                  iVar2 = *(int *)(iVar2 + 0x14);
                  if (iVar2 == 0) {
                    func_0x014388e4();
                  }
                  uVar5 = func_0x04cd26d0(iVar2,iVar9,*puVar12);
                  iVar1 = func_0x04cfd760(iVar1,iVar10,**(undefined4 **)(_UNK_02fd237c + 0x2fd22d8))
                  ;
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = *(int *)(iVar1 + 0x18);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  uVar6 = func_0x04cd26d0(iVar1,iVar9,*puVar12);
                  puVar12 = *(undefined4 **)(_UNK_02fd2380 + 0x2fd2328);
                  *param_1 = 0;
                  param_1[1] = 0;
                  uVar7 = *puVar12;
                  goto LAB_02fd2270;
                }
              }
              else if (iVar4 < iVar2) goto LAB_02fd227c;
              iVar9 = iVar9 + 1;
            }
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < *(int *)(iVar1 + 0xc));
      }
      uVar7 = **(undefined4 **)(_UNK_02fd2384 + 0x2fd223c);
      *param_1 = 0;
      param_1[1] = 0;
    }
    uVar5 = 0;
    uVar6 = 0;
LAB_02fd2270:
    func_0x03fc9b24(param_1,uVar5,uVar6,uVar7);
  }
  else {
    iVar1 = func_0x029540a4(0x3b91,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028d4168(&uStack_30,iVar1,param_2,param_3,0);
    *param_1 = uStack_30;
    param_1[1] = uStack_2c;
  }
  return;
}

