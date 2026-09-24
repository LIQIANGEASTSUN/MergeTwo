
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02c3b928(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar3 = (char *)(_UNK_02c3bcc8 + 0x2c3b948);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c3bccc + 0x2c3b960));
    func_0x01438628(*(undefined4 *)(_UNK_02c3bcd0 + 0x2c3b96c));
    func_0x01438628(*(undefined4 *)(_UNK_02c3bcd4 + 0x2c3b978));
    func_0x01438628(*(undefined4 *)(_UNK_02c3bcd8 + 0x2c3b984));
    func_0x01438628(*(undefined4 *)(_UNK_02c3bcdc + 0x2c3b990));
    func_0x01438628(*(undefined4 *)(_UNK_02c3bce0 + 0x2c3b99c));
    func_0x01438628(*(undefined4 *)(_UNK_02c3bce4 + 0x2c3b9a8));
    func_0x01438628(*(undefined4 *)(_UNK_02c3bce8 + 0x2c3b9b4));
    func_0x01438628(*(undefined4 *)(_UNK_02c3bcec + 0x2c3b9c0));
    *pcVar3 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uVar4 = 0;
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x11df,0);
  if (iVar1 == 0) {
    iVar1 = 0;
    if (param_2 != 0) {
      iVar1 = *(int *)(param_2 + 0xc);
    }
    if (((param_2 != 0 && iVar1 != 0) &&
        (((iVar1 = func_0x02c3d8bc(param_1,param_2,param_3), iVar1 != 0 &&
          (0 < *(int *)(iVar1 + 0xc))) ||
         (iVar1 = func_0x02c3dcbc(param_1,param_2,param_3), iVar1 != 0)))) &&
       ((uVar4 = (uint)(0 < *(int *)(iVar1 + 0xc)), 0 < *(int *)(iVar1 + 0xc) && (param_4 != 0)))) {
      func_0x024ef7ac(&uStack_48,iVar1,**(undefined4 **)(_UNK_02c3bcf0 + 0x2c3bac0));
      uStack_38 = uStack_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      puVar8 = *(undefined4 **)(_UNK_02c3bcf4 + 0x2c3badc);
      piVar7 = *(int **)(_UNK_02c3bcf8 + 0x2c3bae4);
      puVar6 = *(undefined4 **)(_UNK_02c3bcfc + 0x2c3baec);
      puVar9 = *(undefined4 **)(_UNK_02c3bd00 + 0x2c3baf4);
      do {
        do {
          do {
            iVar1 = func_0x04873f24(&uStack_38,*puVar8);
            uVar5 = uStack_2c;
            if (iVar1 == 0) {
              iVar1 = 8;
              goto LAB_02c3bbf8;
            }
            if (*(int *)(*piVar7 + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar1 = func_0x014e9518(*puVar6);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = FUN_02bd7f00(iVar1,uVar5,param_3,0);
          } while (iVar1 == 0);
          if (*(int *)(**(int **)(_UNK_02c3bd04 + 0x2c3bb60) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar2 = func_0x014e9518(*puVar9);
          uVar5 = *(undefined4 *)(iVar1 + 8);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar1 = func_0x029a6fa8(iVar2,uVar5,0);
        } while (iVar1 == 0);
        if (*(int *)(*piVar7 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x014e9518(*puVar6);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar1 = FUN_02bd149c(iVar2,iVar1,0);
      } while (iVar1 == 0);
      iVar1 = 0xb;
LAB_02c3bbf8:
      func_0x04873f20(&uStack_38,**(undefined4 **)(_UNK_02c3bd08 + 0x2c3bc04));
      uVar4 = (uint)(iVar1 != 0xb);
    }
  }
  else {
    iVar1 = func_0x029540a4(0x11df,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar4 = func_0x0289d560(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar4;
}

