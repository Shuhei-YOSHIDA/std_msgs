/*
 * Copyright (C) 2019, Shuhei-YOSHIDA
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *   * Redistributions of source code must retain the above copyright notice,
 *     this list of conditions and the following disclaimer.
 *   * Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution.
 *   * Neither the names of Willow Garage, Inc. nor the names of its
 *     contributors may be used to endorse or promote products derived from
 *     this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef STD_MSGS_COLOR_NAMES_H
#define STD_MSGS_COLOR_NAMES_H

#include <std_msgs/ColorRGBA.h>

namespace std_msgs
{
std_msgs::ColorRGBA makeColorMsg(std::string preset_name, double alpha=1.0);

std_msgs::ColorRGBA makeColorMsg(std::string preset_name, double alpha)
{
  float c[3];

  //{"color_name", {R, G, B}}
  if      (preset_name == "aliceblue") {c[0]=0.941176; c[1]=0.972549; c[2]=1;}
  else if (preset_name == "antiquewhite") {c[0]=0.980392; c[1]=0.921569; c[2]=0.843137;}
  else if (preset_name == "aqua") {c[0]=0; c[1]=1; c[2]=1;}
  else if (preset_name == "aquamarine") {c[0]=0.498039; c[1]=1; c[2]=0.831373;}
  else if (preset_name == "azure") {c[0]=0.941176; c[1]=1; c[2]=1;}
  else if (preset_name == "beige") {c[0]=0.960784; c[1]=0.960784; c[2]=0.862745;}
  else if (preset_name == "bisque") {c[0]=1; c[1]=0.894118; c[2]=0.768627;}
  else if (preset_name == "black") {c[0]=0; c[1]=0; c[2]=0;}
  else if (preset_name == "blanchedalmond") {c[0]=1; c[1]=0.921569; c[2]=0.803922;}
  else if (preset_name == "blue") {c[0]=0; c[1]=0; c[2]=1;}
  else if (preset_name == "blueviolet") {c[0]=0.541176; c[1]=0.168627; c[2]=0.886275;}
  else if (preset_name == "brown") {c[0]=0.647059; c[1]=0.164706; c[2]=0.164706;}
  else if (preset_name == "burlywood") {c[0]=0.870588; c[1]=0.721569; c[2]=0.529412;}
  else if (preset_name == "cadetblue") {c[0]=0.372549; c[1]=0.619608; c[2]=0.627451;}
  else if (preset_name == "chartreuse") {c[0]=0.498039; c[1]=1; c[2]=0;}
  else if (preset_name == "chocolate") {c[0]=0.823529; c[1]=0.411765; c[2]=0.117647;}
  else if (preset_name == "coral") {c[0]=1; c[1]=0.498039; c[2]=0.313725;}
  else if (preset_name == "cornflowerblue") {c[0]=0.392157; c[1]=0.584314; c[2]=0.929412;}
  else if (preset_name == "cornsilk") {c[0]=1; c[1]=0.972549; c[2]=0.862745;}
  else if (preset_name == "crimson") {c[0]=0.862745; c[1]=0.0784314; c[2]=0.235294;}
  else if (preset_name == "cyan") {c[0]=0; c[1]=1; c[2]=1;}
  else if (preset_name == "darkblue") {c[0]=0; c[1]=0; c[2]=0.545098;}
  else if (preset_name == "darkcyan") {c[0]=0; c[1]=0.545098; c[2]=0.545098;}
  else if (preset_name == "darkgoldenrod") {c[0]=0.721569; c[1]=0.52549; c[2]=0.0431373;}
  else if (preset_name == "darkgray") {c[0]=0.662745; c[1]=0.662745; c[2]=0.662745;}
  else if (preset_name == "darkgreen") {c[0]=0; c[1]=0.392157; c[2]=0;}
  else if (preset_name == "darkkhaki") {c[0]=0.741176; c[1]=0.717647; c[2]=0.419608;}
  else if (preset_name == "darkmagenta") {c[0]=0.545098; c[1]=0; c[2]=0.545098;}
  else if (preset_name == "darkolivegreen") {c[0]=0.333333; c[1]=0.419608; c[2]=0.184314;}
  else if (preset_name == "darkorange") {c[0]=1; c[1]=0.54902; c[2]=0;}
  else if (preset_name == "darkorchid") {c[0]=0.6; c[1]=0.196078; c[2]=0.8;}
  else if (preset_name == "darkred") {c[0]=0.545098; c[1]=0; c[2]=0;}
  else if (preset_name == "darksalmon") {c[0]=0.913725; c[1]=0.588235; c[2]=0.478431;}
  else if (preset_name == "darkseagreen") {c[0]=0.560784; c[1]=0.737255; c[2]=0.560784;}
  else if (preset_name == "darkslateblue") {c[0]=0.282353; c[1]=0.239216; c[2]=0.545098;}
  else if (preset_name == "darkslategray") {c[0]=0.184314; c[1]=0.309804; c[2]=0.309804;}
  else if (preset_name == "darkturquoise") {c[0]=0; c[1]=0.807843; c[2]=0.819608;}
  else if (preset_name == "darkviolet") {c[0]=0.580392; c[1]=0; c[2]=0.827451;}
  else if (preset_name == "deeppink") {c[0]=1; c[1]=0.0784314; c[2]=0.576471;}
  else if (preset_name == "deepskyblue") {c[0]=0; c[1]=0.74902; c[2]=1;}
  else if (preset_name == "dimgray") {c[0]=0.411765; c[1]=0.411765; c[2]=0.411765;}
  else if (preset_name == "dodgerblue") {c[0]=0.117647; c[1]=0.564706; c[2]=1;}
  else if (preset_name == "firebrick") {c[0]=0.698039; c[1]=0.133333; c[2]=0.133333;}
  else if (preset_name == "floralwhite") {c[0]=1; c[1]=0.980392; c[2]=0.941176;}
  else if (preset_name == "forestgreen") {c[0]=0.133333; c[1]=0.545098; c[2]=0.133333;}
  else if (preset_name == "fuchsia") {c[0]=1; c[1]=0; c[2]=1;}
  else if (preset_name == "gainsboro") {c[0]=0.862745; c[1]=0.862745; c[2]=0.862745;}
  else if (preset_name == "ghostwhite") {c[0]=0.972549; c[1]=0.972549; c[2]=1;}
  else if (preset_name == "gold") {c[0]=1; c[1]=0.843137; c[2]=0;}
  else if (preset_name == "goldenrod") {c[0]=0.854902; c[1]=0.647059; c[2]=0.12549;}
  else if (preset_name == "gray") {c[0]=0.501961; c[1]=0.501961; c[2]=0.501961;}
  else if (preset_name == "green") {c[0]=0; c[1]=0.501961; c[2]=0;}
  else if (preset_name == "greenyellow") {c[0]=0.678431; c[1]=1; c[2]=0.184314;}
  else if (preset_name == "honeydew") {c[0]=0.941176; c[1]=1; c[2]=0.941176;}
  else if (preset_name == "hotpink") {c[0]=1; c[1]=0.411765; c[2]=0.705882;}
  else if (preset_name == "indianred") {c[0]=0.803922; c[1]=0.360784; c[2]=0.360784;}
  else if (preset_name == "indigo") {c[0]=0.294118; c[1]=0; c[2]=0.509804;}
  else if (preset_name == "ivory") {c[0]=1; c[1]=1; c[2]=0.941176;}
  else if (preset_name == "khaki") {c[0]=0.941176; c[1]=0.901961; c[2]=0.54902;}
  else if (preset_name == "lavender") {c[0]=0.901961; c[1]=0.901961; c[2]=0.980392;}
  else if (preset_name == "lavenderblush") {c[0]=1; c[1]=0.941176; c[2]=0.960784;}
  else if (preset_name == "lawngreen") {c[0]=0.486275; c[1]=0.988235; c[2]=0;}
  else if (preset_name == "lemonchiffon") {c[0]=1; c[1]=0.980392; c[2]=0.803922;}
  else if (preset_name == "lightblue") {c[0]=0.678431; c[1]=0.847059; c[2]=0.901961;}
  else if (preset_name == "lightcoral") {c[0]=0.941176; c[1]=0.501961; c[2]=0.501961;}
  else if (preset_name == "lightcyan") {c[0]=0.878431; c[1]=1; c[2]=1;}
  else if (preset_name == "lightgoldenrodyellow") {c[0]=0.980392; c[1]=0.980392; c[2]=0.823529;}
  else if (preset_name == "lightgray") {c[0]=0.827451; c[1]=0.827451; c[2]=0.827451;}
  else if (preset_name == "lightgreen") {c[0]=0.564706; c[1]=0.933333; c[2]=0.564706;}
  else if (preset_name == "lightpink") {c[0]=1; c[1]=0.713725; c[2]=0.756863;}
  else if (preset_name == "lightsalmon") {c[0]=1; c[1]=0.627451; c[2]=0.478431;}
  else if (preset_name == "lightseagreen") {c[0]=0.12549; c[1]=0.698039; c[2]=0.666667;}
  else if (preset_name == "lightskyblue") {c[0]=0.529412; c[1]=0.807843; c[2]=0.980392;}
  else if (preset_name == "lightslategray") {c[0]=0.466667; c[1]=0.533333; c[2]=0.6;}
  else if (preset_name == "lightsteelblue") {c[0]=0.690196; c[1]=0.768627; c[2]=0.870588;}
  else if (preset_name == "lightyellow") {c[0]=1; c[1]=1; c[2]=0.878431;}
  else if (preset_name == "lime") {c[0]=0; c[1]=1; c[2]=0;}
  else if (preset_name == "limegreen") {c[0]=0.196078; c[1]=0.803922; c[2]=0.196078;}
  else if (preset_name == "linen") {c[0]=0.980392; c[1]=0.941176; c[2]=0.901961;}
  else if (preset_name == "magenta") {c[0]=1; c[1]=0; c[2]=1;}
  else if (preset_name == "maroon") {c[0]=0.501961; c[1]=0; c[2]=0;}
  else if (preset_name == "mediumaquamarine") {c[0]=0.4; c[1]=0.803922; c[2]=0.666667;}
  else if (preset_name == "mediumblue") {c[0]=0; c[1]=0; c[2]=0.803922;}
  else if (preset_name == "mediumorchid") {c[0]=0.729412; c[1]=0.333333; c[2]=0.827451;}
  else if (preset_name == "mediumpurple") {c[0]=0.576471; c[1]=0.439216; c[2]=0.858824;}
  else if (preset_name == "mediumseagreen") {c[0]=0.235294; c[1]=0.701961; c[2]=0.443137;}
  else if (preset_name == "mediumslateblue") {c[0]=0.482353; c[1]=0.407843; c[2]=0.933333;}
  else if (preset_name == "mediumspringgreen") {c[0]=0; c[1]=0.980392; c[2]=0.603922;}
  else if (preset_name == "mediumturquoise") {c[0]=0.282353; c[1]=0.819608; c[2]=0.8;}
  else if (preset_name == "mediumvioletred") {c[0]=0.780392; c[1]=0.0823529; c[2]=0.521569;}
  else if (preset_name == "midnightblue") {c[0]=0.0980392; c[1]=0.0980392; c[2]=0.439216;}
  else if (preset_name == "mintcream") {c[0]=0.960784; c[1]=1; c[2]=0.980392;}
  else if (preset_name == "mistyrose") {c[0]=1; c[1]=0.894118; c[2]=0.882353;}
  else if (preset_name == "moccasin") {c[0]=1; c[1]=0.894118; c[2]=0.709804;}
  else if (preset_name == "navajowhite") {c[0]=1; c[1]=0.870588; c[2]=0.678431;}
  else if (preset_name == "navy") {c[0]=0; c[1]=0; c[2]=0.501961;}
  else if (preset_name == "oldlace") {c[0]=0.992157; c[1]=0.960784; c[2]=0.901961;}
  else if (preset_name == "olive") {c[0]=0.501961; c[1]=0.501961; c[2]=0;}
  else if (preset_name == "olivedrab") {c[0]=0.419608; c[1]=0.556863; c[2]=0.137255;}
  else if (preset_name == "orange") {c[0]=1; c[1]=0.647059; c[2]=0;}
  else if (preset_name == "orangered") {c[0]=1; c[1]=0.270588; c[2]=0;}
  else if (preset_name == "orchid") {c[0]=0.854902; c[1]=0.439216; c[2]=0.839216;}
  else if (preset_name == "palegoldenrod") {c[0]=0.933333; c[1]=0.909804; c[2]=0.666667;}
  else if (preset_name == "palegreen") {c[0]=0.596078; c[1]=0.984314; c[2]=0.596078;}
  else if (preset_name == "paleturquoise") {c[0]=0.686275; c[1]=0.933333; c[2]=0.933333;}
  else if (preset_name == "palevioletred") {c[0]=0.858824; c[1]=0.439216; c[2]=0.576471;}
  else if (preset_name == "papayawhip") {c[0]=1; c[1]=0.937255; c[2]=0.835294;}
  else if (preset_name == "peachpuff") {c[0]=1; c[1]=0.854902; c[2]=0.72549;}
  else if (preset_name == "peru") {c[0]=0.803922; c[1]=0.521569; c[2]=0.247059;}
  else if (preset_name == "pink") {c[0]=1; c[1]=0.752941; c[2]=0.796078;}
  else if (preset_name == "plum") {c[0]=0.866667; c[1]=0.627451; c[2]=0.866667;}
  else if (preset_name == "powderblue") {c[0]=0.690196; c[1]=0.878431; c[2]=0.901961;}
  else if (preset_name == "purple") {c[0]=0.501961; c[1]=0; c[2]=0.501961;}
  else if (preset_name == "red") {c[0]=1; c[1]=0; c[2]=0;}
  else if (preset_name == "rosybrown") {c[0]=0.737255; c[1]=0.560784; c[2]=0.560784;}
  else if (preset_name == "royalblue") {c[0]=0.254902; c[1]=0.411765; c[2]=0.882353;}
  else if (preset_name == "saddlebrown") {c[0]=0.545098; c[1]=0.270588; c[2]=0.0745098;}
  else if (preset_name == "salmon") {c[0]=0.980392; c[1]=0.501961; c[2]=0.447059;}
  else if (preset_name == "sandybrown") {c[0]=0.956863; c[1]=0.643137; c[2]=0.376471;}
  else if (preset_name == "seagreen") {c[0]=0.180392; c[1]=0.545098; c[2]=0.341176;}
  else if (preset_name == "seashell") {c[0]=1; c[1]=0.960784; c[2]=0.933333;}
  else if (preset_name == "sienna") {c[0]=0.627451; c[1]=0.321569; c[2]=0.176471;}
  else if (preset_name == "silver") {c[0]=0.752941; c[1]=0.752941; c[2]=0.752941;}
  else if (preset_name == "skyblue") {c[0]=0.529412; c[1]=0.807843; c[2]=0.921569;}
  else if (preset_name == "slateblue") {c[0]=0.415686; c[1]=0.352941; c[2]=0.803922;}
  else if (preset_name == "slategray") {c[0]=0.439216; c[1]=0.501961; c[2]=0.564706;}
  else if (preset_name == "snow") {c[0]=1; c[1]=0.980392; c[2]=0.980392;}
  else if (preset_name == "springgreen") {c[0]=0; c[1]=1; c[2]=0.498039;}
  else if (preset_name == "steelblue") {c[0]=0.27451; c[1]=0.509804; c[2]=0.705882;}
  else if (preset_name == "tan") {c[0]=0.823529; c[1]=0.705882; c[2]=0.54902;}
  else if (preset_name == "teal") {c[0]=0; c[1]=0.501961; c[2]=0.501961;}
  else if (preset_name == "thistle") {c[0]=0.847059; c[1]=0.74902; c[2]=0.847059;}
  else if (preset_name == "tomato") {c[0]=1; c[1]=0.388235; c[2]=0.278431;}
  else if (preset_name == "turquoise") {c[0]=0.25098; c[1]=0.878431; c[2]=0.815686;}
  else if (preset_name == "violet") {c[0]=0.933333; c[1]=0.509804; c[2]=0.933333;}
  else if (preset_name == "wheat") {c[0]=0.960784; c[1]=0.870588; c[2]=0.701961;}
  else if (preset_name == "white") {c[0]=1; c[1]=1; c[2]=1;}
  else if (preset_name == "whitesmoke") {c[0]=0.960784; c[1]=0.960784; c[2]=0.960784;}
  else if (preset_name == "yellow") {c[0]=1; c[1]=1; c[2]=0;}
  else if (preset_name == "yellowgreen") {c[0]=0.603922; c[1]=0.803922; c[2]=0.196078;}
  else {c[0]=0; c[1]=0; c[2]=0;}

  std_msgs::ColorRGBA color_msg;
  color_msg.a = alpha;
  if (color_msg.a < 0.) color_msg.a = 0.;
  if (color_msg.a > 1.) color_msg.a = 1.;

  color_msg.r = c[0];
  color_msg.g = c[1];
  color_msg.b = c[2];

  return color_msg;
}

} // namespace std_msgs

#endif
