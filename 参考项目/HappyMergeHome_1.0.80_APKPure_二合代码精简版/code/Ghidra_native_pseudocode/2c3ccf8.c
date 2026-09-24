
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c4ccf8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_02c4cf30 + 0x2c4cd18);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c4cf34 + 0x2c4cd2c));
    func_0x01438628(*(undefined4 *)(_UNK_02c4cf38 + 0x2c4cd38));
    func_0x01438628(*(undefined4 *)(_UNK_02c4cf3c + 0x2c4cd44));
    func_0x01438628(*(undefined4 *)(_UNK_02c4cf40 + 0x2c4cd50));
    func_0x01438628(*(undefined4 *)(_UNK_02c4cf44 + 0x2c4cd5c));
    func_0x01438628(*(undefined4 *)(_UNK_02c4cf48 + 0x2c4cd68));
    func_0x01438628(*(undefined4 *)(_UNK_02c4cf4c + 0x2c4cd74));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x2627,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02c4cf50 + 0x2c4cdd8));
    func_0x024eeca8(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    piVar6 = *(int **)(_UNK_02c4cf54 + 0x2c4ce00);
    *(undefined4 *)(iVar1 + 0xc) = param_3;
    *(undefined4 *)(iVar1 + 8) = param_2;
    if (*(int *)(*piVar6 + 0x74) == 0) {
      func_0x014387a4();
    }
    puVar4 = *(undefined4 **)(_UNK_02c4cf58 + 0x2c4ce24);
    uVar2 = func_0x014e9518(*puVar4);
    if (*(int *)(**(int **)(_UNK_02c4cf5c + 0x2c4ce38) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x024eec50(uVar2,0,0);
    if (iVar3 == 0) {
      if (*(int *)(*piVar6 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar3 = func_0x014e9518(*puVar4);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar3 + 0x10) != 0) {
        if (*(int *)(*piVar6 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(*puVar4);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar3 + 0x10);
        uVar2 = func_0x014388d4(**(undefined4 **)(_UNK_02c4cf60 + 0x2c4ced0));
        func_0x03a062d0(uVar2,iVar1,**(undefined4 **)(_UNK_02c4cf64 + 0x2c4cef0),0);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar2 = (*(code *)&SUB_04cfe1c0)(iVar3,uVar2,**(undefined4 **)(_UNK_02c4cf68 + 0x2c4cf14));
        return uVar2;
      }
    }
    uVar2 = 0;
  }
  else {
    iVar1 = func_0x029540a4(0x2627,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028bd070(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}

