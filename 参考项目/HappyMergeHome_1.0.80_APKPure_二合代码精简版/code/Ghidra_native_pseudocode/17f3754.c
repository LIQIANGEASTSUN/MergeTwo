
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01803754(undefined4 *param_1,undefined4 param_2,int param_3)

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
  
  pcVar8 = (char *)(_UNK_01803ae0 + 0x1803774);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01803ae4 + 0x1803788));
    func_0x01438628(*(undefined4 *)(_UNK_01803ae8 + 0x1803794));
    func_0x01438628(*(undefined4 *)(_UNK_01803aec + 0x18037a0));
    func_0x01438628(*(undefined4 *)(_UNK_01803af0 + 0x18037ac));
    func_0x01438628(*(undefined4 *)(_UNK_01803af4 + 0x18037b8));
    func_0x01438628(*(undefined4 *)(_UNK_01803af8 + 0x18037c4));
    func_0x01438628(*(undefined4 *)(_UNK_01803afc + 0x18037d0));
    func_0x01438628(*(undefined4 *)(_UNK_01803b00 + 0x18037dc));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x3a68,0);
  if (iVar1 == 0) {
    iVar1 = FUN_01803064(param_2,0);
    if (iVar1 == 0) {
      puVar12 = *(undefined4 **)(_UNK_01803b2c + 0x1803a00);
      *param_1 = 0;
      param_1[1] = 0;
      uVar7 = *puVar12;
    }
    else {
      if (*(int *)(**(int **)(_UNK_01803b04 + 0x1803864) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01803b08 + 0x1803884));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x18);
      if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
        iVar10 = 0;
        puVar12 = *(undefined4 **)(_UNK_01803b0c + 0x18038c0);
        do {
          iVar2 = func_0x0152983c(iVar1,iVar10,**(undefined4 **)(_UNK_01803b10 + 0x18038cc));
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0xc);
          if (param_3 == 0) {
            func_0x014388e4();
          }
          if (iVar2 == *(int *)(param_3 + 0x10)) {
            if (*(int *)(**(int **)(_UNK_01803b14 + 0x180390c) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar2 = func_0x02af5448(param_3,0);
            iVar3 = func_0x0152983c(iVar1,iVar10,**(undefined4 **)(_UNK_01803b18 + 0x180393c));
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
LAB_01803a20:
                  iVar2 = func_0x0152983c(iVar1,iVar10,**(undefined4 **)(_UNK_01803b1c + 0x1803a30))
                  ;
                  if (iVar2 == 0) {
                    func_0x014388e4();
                  }
                  iVar2 = *(int *)(iVar2 + 0x14);
                  if (iVar2 == 0) {
                    func_0x014388e4();
                  }
                  uVar5 = func_0x024f0530(iVar2,iVar9,*puVar12);
                  iVar1 = func_0x0152983c(iVar1,iVar10,**(undefined4 **)(_UNK_01803b20 + 0x1803a7c))
                  ;
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = *(int *)(iVar1 + 0x18);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  uVar6 = func_0x024f0530(iVar1,iVar9,*puVar12);
                  puVar12 = *(undefined4 **)(_UNK_01803b24 + 0x1803acc);
                  *param_1 = 0;
                  param_1[1] = 0;
                  uVar7 = *puVar12;
                  goto LAB_01803a14;
                }
              }
              else if (iVar4 < iVar2) goto LAB_01803a20;
              iVar9 = iVar9 + 1;
            }
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < *(int *)(iVar1 + 0xc));
      }
      uVar7 = **(undefined4 **)(_UNK_01803b28 + 0x18039e4);
      *param_1 = 0;
      param_1[1] = 0;
    }
    uVar5 = 0;
    uVar6 = 0;
LAB_01803a14:
    func_0x024f1088(param_1,uVar5,uVar6,uVar7);
  }
  else {
    iVar1 = func_0x029540a4(0x3a68,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028d4168(&uStack_30,iVar1,param_2,param_3,0);
    *param_1 = uStack_30;
    param_1[1] = uStack_2c;
  }
  return;
}

