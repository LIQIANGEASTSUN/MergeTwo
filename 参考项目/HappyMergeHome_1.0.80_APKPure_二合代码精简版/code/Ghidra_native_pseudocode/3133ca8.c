
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_03143ca8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_0314413c + 0x3143ccc);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03144140 + 0x3143ce0));
    func_0x01438628(*(undefined4 *)(_UNK_03144144 + 0x3143cec));
    func_0x01438628(*(undefined4 *)(_UNK_03144148 + 0x3143cf8));
    func_0x01438628(*(undefined4 *)(_UNK_0314414c + 0x3143d04));
    func_0x01438628(*(undefined4 *)(_UNK_03144150 + 0x3143d10));
    func_0x01438628(*(undefined4 *)(_UNK_03144154 + 0x3143d1c));
    func_0x01438628(*(undefined4 *)(_UNK_03144158 + 0x3143d28));
    func_0x01438628(*(undefined4 *)(_UNK_0314415c + 0x3143d34));
    func_0x01438628(*(undefined4 *)(_UNK_03144160 + 0x3143d40));
    func_0x01438628(*(undefined4 *)(_UNK_03144164 + 0x3143d4c));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x7a04,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_03144168 + 0x3143dbc) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_0313e53c();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_031431d8(iVar1,param_3);
    uVar2 = 0;
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      iVar6 = 0;
      piVar8 = *(int **)(_UNK_0314416c + 0x3143e20);
      do {
        uStack_28 = func_0x04cd26d0(iVar1,iVar6,**(undefined4 **)(_UNK_03144170 + 0x3143e34));
        if (*(int *)(**(int **)(_UNK_03144174 + 0x3143e4c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_03144178 + 0x3143e6c));
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02bdd790(iVar3,param_2,uVar2,0,0);
        if (iVar3 == -1) {
          if (*(int *)(**(int **)(_UNK_0314417c + 0x3143f38) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = FUN_0313e53c();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = FUN_031435ec(iVar3);
          uVar2 = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x03b75ba0(iVar3,uVar2,**(undefined4 **)(_UNK_03144180 + 0x3143f88));
          iVar3 = FUN_0313e53c();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + 1;
          iVar3 = FUN_03143658();
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x0315c208(iVar3,0);
          }
        }
        else {
          if (*(int *)(**(int **)(_UNK_03144184 + 0x3143eb4) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_03144188 + 0x3143ed0));
          uVar2 = uStack_28;
          uVar7 = *(undefined4 *)(param_1 + 0x10);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          func_0x02bd2cf0(iVar4,iVar3,uVar2,1,2,uVar7,param_2,1,0xffffffff,0,0);
        }
        if (*(int *)(*piVar8 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x0202346c(0);
        uVar2 = func_0x01524ffc(&uStack_28,0);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x020257a4(iVar3,0x291,uVar2,**(undefined4 **)(_UNK_0314418c + 0x314403c),0,0,0);
        uVar2 = uStack_28;
        iVar3 = **(int **)(**(int **)(_UNK_03144190 + 0x3144074) + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02e651cc(iVar3,uVar2,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_03144194 + 0x31440d0));
          func_0x02025440(iVar4,0);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          *(undefined1 *)(iVar4 + 0x25) = 0;
          *(undefined4 *)(iVar4 + 8) = 0x6a;
          *(undefined4 *)(iVar4 + 0xc) = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x02024d08(iVar3,iVar4,1,0);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(iVar1 + 0xc));
      uVar2 = 0;
    }
  }
  else {
    iVar1 = func_0x029540a4(0x7a04,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d664c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}

