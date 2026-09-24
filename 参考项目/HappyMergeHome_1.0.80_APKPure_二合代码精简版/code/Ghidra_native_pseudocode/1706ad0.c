
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01716ad0(undefined4 *param_1,undefined4 param_2,int param_3)

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
  
  pcVar8 = (char *)(_UNK_01716e58 + 0x1716af0);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01716e5c + 0x1716b04));
    func_0x01438628(*(undefined4 *)(_UNK_01716e60 + 0x1716b10));
    func_0x01438628(*(undefined4 *)(_UNK_01716e64 + 0x1716b1c));
    func_0x01438628(*(undefined4 *)(_UNK_01716e68 + 0x1716b28));
    func_0x01438628(*(undefined4 *)(_UNK_01716e6c + 0x1716b34));
    func_0x01438628(*(undefined4 *)(_UNK_01716e70 + 0x1716b40));
    func_0x01438628(*(undefined4 *)(_UNK_01716e74 + 0x1716b4c));
    func_0x01438628(*(undefined4 *)(_UNK_01716e78 + 0x1716b58));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x3bdc,0);
  if (iVar1 == 0) {
    iVar1 = FUN_0170e9c4(param_2);
    if (iVar1 == 0) {
      uVar7 = **(undefined4 **)(_UNK_01716ea4 + 0x1716d74);
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      if (*(int *)(**(int **)(_UNK_01716e7c + 0x1716bd8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01716e80 + 0x1716bf8));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x18);
      if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
        iVar10 = 0;
        puVar12 = *(undefined4 **)(_UNK_01716e84 + 0x1716c34);
        do {
          iVar2 = func_0x0152983c(iVar1,iVar10,**(undefined4 **)(_UNK_01716e88 + 0x1716c40));
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0xc);
          if (param_3 == 0) {
            func_0x014388e4();
          }
          if (iVar2 == *(int *)(param_3 + 0x10)) {
            if (*(int *)(**(int **)(_UNK_01716e8c + 0x1716c80) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar2 = func_0x02af5448(param_3,0);
            iVar3 = func_0x0152983c(iVar1,iVar10,**(undefined4 **)(_UNK_01716e90 + 0x1716cb0));
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
LAB_01716d98:
                  iVar2 = func_0x0152983c(iVar1,iVar10,**(undefined4 **)(_UNK_01716e94 + 0x1716da8))
                  ;
                  if (iVar2 == 0) {
                    func_0x014388e4();
                  }
                  iVar2 = *(int *)(iVar2 + 0x14);
                  if (iVar2 == 0) {
                    func_0x014388e4();
                  }
                  uVar5 = func_0x024f0530(iVar2,iVar9,*puVar12);
                  iVar1 = func_0x0152983c(iVar1,iVar10,**(undefined4 **)(_UNK_01716e98 + 0x1716df4))
                  ;
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = *(int *)(iVar1 + 0x18);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  uVar6 = func_0x024f0530(iVar1,iVar9,*puVar12);
                  puVar12 = *(undefined4 **)(_UNK_01716e9c + 0x1716e44);
                  *param_1 = 0;
                  param_1[1] = 0;
                  uVar7 = *puVar12;
                  goto LAB_01716d8c;
                }
              }
              else if (iVar4 < iVar2) goto LAB_01716d98;
              iVar9 = iVar9 + 1;
            }
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < *(int *)(iVar1 + 0xc));
      }
      uVar7 = **(undefined4 **)(_UNK_01716ea0 + 0x1716d58);
      *param_1 = 0;
      param_1[1] = 0;
    }
    uVar5 = 0;
    uVar6 = 0;
LAB_01716d8c:
    func_0x024f1088(param_1,uVar5,uVar6,uVar7);
  }
  else {
    iVar1 = func_0x029540a4(0x3bdc,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028d4168(&uStack_30,iVar1,param_2,param_3,0);
    *param_1 = uStack_30;
    param_1[1] = uStack_2c;
  }
  return;
}

