
/* WARNING: Possible PIC construction at 0x01d3bf5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01d3bf60) */
/* WARNING: Removing unreachable block (ram,0x01d3bf78) */
/* WARNING: Removing unreachable block (ram,0x01d3bf7c) */
/* WARNING: Removing unreachable block (ram,0x01d3bfdc) */
/* WARNING: Removing unreachable block (ram,0x01d3bfe0) */
/* WARNING: Removing unreachable block (ram,0x01d3c03c) */
/* WARNING: Removing unreachable block (ram,0x01d3c040) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01d3bdf0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01d3c060 + 0x1d3be18);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01d3c064 + 0x1d3be44));
    func_0x01438628(*(undefined4 *)(_UNK_01d3c068 + 0x1d3be50));
    func_0x01438628(*(undefined4 *)(_UNK_01d3c06c + 0x1d3be5c));
    func_0x01438628(*(undefined4 *)(_UNK_01d3c070 + 0x1d3be68));
    func_0x01438628(*(undefined4 *)(_UNK_01d3c074 + 0x1d3be74));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5e6a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5e6a,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028fc1b8(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0);
    return;
  }
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01d3c078 + 0x1d3bef8));
  func_0x024eeca8(iVar1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  *(undefined4 *)(iVar1 + 0x14) = param_8;
  func_0x014385cc((undefined4 *)(iVar1 + 0x14),param_8);
  *(undefined4 *)(iVar1 + 8) = param_4;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0xc) = param_5;
  iVar1 = FUN_01d3a794();
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  (*(code *)&UNK_05d3ec04)(iVar1,1,0);
  return;
}

